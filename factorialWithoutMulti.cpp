#include <iostream>

using namespace std;

void factUsingPlus(int n){
    int res=n;
    
    for(int i=n-1; i>0; i--){
        int sum = 0;
        for(int j=0; j<i; j++)
            sum += res;
        res = sum;
    }
    cout << res << endl;
}

void factUsingDivision(int n){
    int fact = 1;
    for(int i=n; i>0; i--)
        fact = fact/(1.0/i);
    cout << fact << endl;
}

int main()
{
    int n;
    cout<<"Enter a Number - ";
    cin>>n;
    
    factUsingPlus(n);
    factUsingDivision(n+1);

    return 0;
}