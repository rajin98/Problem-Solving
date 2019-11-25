// URL: https://open.kattis.com/problems/cold

#include <iostream>
using namespace std;

int main() {
    int n, x, cnt=0;
    cin >> n;
    while(n--){
        cin >> x;
        if(x < 0) cnt++;
    }
    cout << cnt;
    return 0;
}
