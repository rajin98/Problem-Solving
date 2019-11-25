// URL: https://open.kattis.com/problems/modulo

#include <iostream>

using namespace std;

int main() {
    int arr[10], cnt = 0;
    for(int i = 0; i < 10; i++) {
        cin >> arr[i]; arr[i] %= 42;
        bool dist = true;
        for(int j=0;j<i;j++) if(arr[j]==arr[i]) dist = false;
        if(dist) cnt++;
    }

    cout << cnt;
    return 0;
}
