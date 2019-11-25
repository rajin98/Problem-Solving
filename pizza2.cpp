// URL: https://open.kattis.com/problems/pizza2

#include <bits/stdc++.h>

using namespace std;

int main()
{
  double c, r;
  cin >> r >> c;
  double totalArea = M_PI * r * r;
  double cheeseArea = M_PI * (r-c) * (r-c);
  double percentage = cheeseArea/totalArea * 100;
  cout << std::setprecision(7) << std::fixed  << percentage;
}
