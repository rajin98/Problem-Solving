// URL: https://open.kattis.com/problems/sodaslurper

#include <iostream>
using namespace std;

int main(){
    int e, f, c, sum = 0, total;
    cin >> e >> f >> c;
    while((e+f)/c != 0){
        total = e + f;
        e = total/c;
        f = total%c;
        sum += e;
    }
    cout << sum;
}
