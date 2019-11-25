#include <iostream>
using namespace std;

// URL: https://open.kattis.com/problems/2048

int a[4][4], b[4][4], d;

int main(){
    
    for(int i = 0; i < 4; i++) for(int j = 0; j < 4; j++) {cin >> a[i][j]; b[i][j] = 0;}
    cin >> d; 
    switch(d){
    case 0:
        for(int i = 0; i < 4; i++){
            int p = 0;
            for(int j = 0; j < 4; j++){
                if(a[i][j] == 0){}
                else if(b[i][p] == 0){b[i][p] = a[i][j];}
                else if(b[i][p] == a[i][j]) { b[i][p]*=2; p++;}
                else {p++; b[i][p] = a[i][j]; }
            }
        }
        break;
        
    case 1:
        for(int j = 0; j < 4; j++){
            int p = 0;
            for(int i = 0; i < 4; i++){
                if(a[i][j] == 0){}
                else if(b[p][j] == 0){b[p][j] = a[i][j];}
                else if(b[p][j] == a[i][j]) { b[p][j]*=2; p++;}
                else {p++; b[p][j] = a[i][j]; }
            }
            //for(int i = 0; i < 4; i++) {for(int j = 0; j < 4; j++) {cout << a[i][j] << " ";}cout << endl;}
        }
        break;
        
    case 2:
        for(int i = 0; i < 4; i++){
            int p = 3;
            for(int j = 3; j >= 0; j--){
                if(a[i][j] == 0){}
                else if(b[i][p] == 0){b[i][p] = a[i][j];}
                else if(b[i][p] == a[i][j]) { b[i][p]*=2; p--;}
                else {p--; b[i][p] = a[i][j]; }
            }
            //for(int i = 0; i < 4; i++) {for(int j = 0; j < 4; j++) {cout << a[i][j] << " ";}cout << endl;}
        }
        break;
        
    case 3:
        for(int j = 0; j < 4; j++){
            int p = 3;
            for(int i = 3; i >= 0; i--){
                if(a[i][j] == 0){}
                else if(b[p][j] == 0){b[p][j] = a[i][j];}
                else if(b[p][j] == a[i][j]) { b[p][j]*=2; p--;}
                else {p--; b[p][j] = a[i][j]; }
            }
            //for(int i = 0; i < 4; i++) {for(int j = 0; j < 4; j++) {cout << a[i][j] << " ";}cout << endl;}
        }
        break;
    }
    
    
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
