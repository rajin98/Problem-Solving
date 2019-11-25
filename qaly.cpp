// URL: https://open.kattis.com/problems/qaly

#include <iostream>

using namespace std;

int main(){
    int n; cin >> n; float sum = 0;
    while(n--){
        float a, b; cin >> a >> b;
        sum += a*b;
    }
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(3);

    cout << sum;
    return 0;
}
