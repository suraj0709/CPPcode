#include<iostream>
#include <climits>
using namespace std;
int main(){
    int a[] = {-11,-2,-3, -1, -2};
    int n = sizeof(a)/sizeof(a[0]);

    int currMax = 0;
    int max = INT_MIN;

    for(int i=0; i<n; i++){
        currMax += a[i];
        if(currMax > max) max = currMax;
        if(currMax < 0) currMax = 0;
    }

    cout << max;
    return 0;
}