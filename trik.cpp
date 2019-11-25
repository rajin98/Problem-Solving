// URL: https://open.kattis.com/problems/trik

#include <iostream>
#include <cstring>

using namespace std;

void swapVal(int * a, int * b){
    int tempA = *a;
    *a = *b;
    *b = tempA;
}

int main()
{   char str[50];
    cin >> str;
    int pos[3] = {1, 0, 0};
    for(int i=0;i<strlen(str);i++){
        if(str[i] == 'A') {
            swapVal(&pos[0], &pos[1]);}
        if(str[i] == 'B') {
            swapVal(&pos[1], &pos[2]);}
        if(str[i] == 'C') {
            swapVal(&pos[0], &pos[2]);}
    }
    for(int i=0;i<3;i++)
        if(pos[i] == 1) cout << i+1;
}
