// URL: https://open.kattis.com/problems/incognito

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    map<string, int>::iterator itr;
    for(int i = 0; i < t; i++){
        int n; cin >> n;
        map<string, int> dict;
        for(int j = 0; j < n; j++){
            string key, val;
            cin >> val >> key;
            if(dict.find(key) == dict.end()) dict[key] = 1;
            dict[key]++;
        }

        int total = 1;
        for(itr = dict.begin(); itr !=  dict.end(); ++itr){
            total *= itr->second;
        }
        cout << total - 1 << endl;
    }
}
