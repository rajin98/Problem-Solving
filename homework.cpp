// URL: https://open.kattis.com/problems/homework

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool matchSubstrings(string S, string S1, string S2, int m, int n, auto &lookup){
    if(m==0 || n==0) return true;
    while(S1[m-1] != S2[n-1]){
        if(S[m+n-1]==S1[m-1]) m--;
        else if (S[m+n-1]==S2[n-1]) n--;
        else if (S[m+n-1]!=S1[m-1] && S[m+n-1]!=S2[n-1]) return false;}
    string key = to_string(m) + "|" + to_string(n);
    if(lookup.find(key)== lookup.end()){
        lookup[key] = matchSubstrings(S, S1, S2, m-1, n, lookup) || matchSubstrings(S, S1, S2, m, n-1, lookup);}
    return lookup[key];
}

int main(){
    string S, S1, S2;
    unordered_map<string, bool> lookup;
    cin >> S >> S1 >> S2;
    if(matchSubstrings(S, S1, S2, S1.length(), S2.length(), lookup)) cout << "yes";
    else cout << "no";
}
