// URL: https://open.kattis.com/problems/babelfish

#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, string> dict;
    bool din = true; int i;
    while(din){
        string a; getline(cin, a);
        if(a.length() == 0) din = false;
        else {
            for(i = 0; i < a.length(); i++) if(a[i] == ' ') break;
            dict[a.substr(i+1)] = a.substr(0,i);
        }
    }
    string b;
    while(getline(cin, b)){
        if(b.length() > 0) (dict[b].length()) ? cout << dict[b] << endl : cout << "eh" << endl;
        else din = true;
    }
}
