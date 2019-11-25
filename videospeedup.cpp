// URL: https://open.kattis.com/problems/videospeedup

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,p,k;
    cin >> n >> p >> k;
    int stamp[n+2]; stamp[0] = 0; stamp[n+1] = k;
    for(int i = 1; i < n+1; i++) cin >> stamp[i];
    double speed = 1, time = 0;
    for(int i = 0; i < n+1; i++){
        time += (stamp[i+1] - stamp[i]) * speed;
        speed += (double)(p/100.0);
    }
    cout << setprecision(6) << std::fixed << time;
}
