// URL: https://open.kattis.com/problems/alicedigital

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int arr[n]; vector<int> mPos;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] == m) mPos.push_back(i);
        }
        int maxSum = 0;
        for(int i = 0; i < mPos.size(); i++){
            int sum = 0, ini, lst;
            ini = (i == 0) ? 0 : mPos[i-1]+1;
            lst = (i == mPos.size() - 1) ? n : mPos[i+1];
            for(int j = ini; j < lst; j++) {
                if(arr[j] < m && j > mPos[i]) break;
                sum += arr[j];
                if(arr[j] < m) sum = 0;
            }
            maxSum = max(maxSum, sum);
        }
        cout << maxSum << endl;
    }
}
