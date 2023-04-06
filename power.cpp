#include<iostream>
using namespace std;

// int calc(int x, int y){
//     if(y == 0) return 1;
//     if(y == 1) return x;

//     return x * calc(x, y-1);
// }

int calc(int x, int y){
    if(y == 0) return 1;
    if(y == 1) return x;

    int ans = calc(x, y/2);

    if((y%2) == 0)  return ans*ans;
    else return x*(ans*ans);
}

int main(){
    int a = 2;
    int b = 9;

    cout << calc(a, b);
    return 0;
}