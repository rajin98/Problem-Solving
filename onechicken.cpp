// URL: https://open.kattis.com/problems/onechicken

#include <iostream>

std::string plural(int x){
    if(x!=1) return "s";
    else return "";
}

int main(){
  int m, n;
  std::cin >> n >> m;
  if(n < m) std::cout << "Dr. Chaz will have " << m-n << " piece" << plural(m-n) << " of chicken left over!";
  else std::cout << "Dr. Chaz needs " << n-m <<" more piece" << plural(n-m) << " of chicken!";
}
