// URL: https://open.kattis.com/problems/weakvertices

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    while(n!=-1){
        cin >> n;
        int arr[n][n];
        for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) cin >> arr[i][j];
        for(int i = 0; i < n; i++) {
            vector<int> adjs;
            bool weak = true;
            for(int j = 0; j < n && weak; j++) {
                if(arr[i][j] == 1) {
                    if(adjs.size() > 0) {
                        for(int k = 0; k < adjs.size() && weak; k++){
                            if(arr[adjs[k]][j]==1) weak = false;
                        }
                    }
                    adjs.push_back(j);
                }
            }
            if(weak) cout << i << " ";
        }
        cout << endl;
    }
}
