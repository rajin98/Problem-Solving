// URL: https://open.kattis.com/problems/touchscreenkeyboard

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    string keyboard[3]={"qwertyuiop",
                        "asdfghjkl",
                        "zxcvbnm"};
    cin >> t;
    for(int i = 0; i<t; i++){
        vector<pair<string, int>> pairs;
        string str;
        int listLength;
        cin >> str >> listLength;
        string strList[listLength];
        for(int j=0; j < listLength; j++) cin >> strList[j];
        for(int j=0; j < listLength; j++){
            int diff=0;
            for(int k=0; k<strList[j].length();k++){
                if(strList[j][k]!=str[k]){
                    int xofItem, xofStr, yofItem, yofStr;
                    for(int y=0;y<3;y++){
                        int temp = keyboard[y].find(strList[j][k]);
                        if(temp != std::string::npos){yofItem = y; xofItem = temp;}
                        temp = keyboard[y].find(str[k]);
                        if(temp != std::string::npos){yofStr = y; xofStr = temp;}
                    }
                    diff += abs(xofItem-xofStr) + abs(yofItem-yofStr);
                }
            }
            pair<string, int> curPair (strList[j], diff);
            pairs.push_back(curPair);
        }
        sort(pairs.begin(), pairs.end(), [=](std::pair<string, int>& a, std::pair<string, int>& b){
            return a.first < b.first;});
        sort(pairs.begin(), pairs.end(), [=](std::pair<string, int>& a, std::pair<string, int>& b){
            return a.second < b.second;});

        for(int it=0; it<pairs.size(); it++){
            cout << pairs[it].first << " " << pairs[it].second << endl;
        }
    }
}
