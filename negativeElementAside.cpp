#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// void reArrange(int a[], int n){
//     int j=0;
//     for(int i=0; i<n; i++){
//         if(a[i] < 0){
//             if(i != j) swap(a[i], a[j]);
//             j++;
//         }
//     }
// }

void reArrange(int a[], int n){
    int low = 0, high = n-1;

    while (low<high)
    {
        if(a[low]<0) low++;
        else if(a[high] > 0) high--;
        else{
            swap(a[low], a[high]);
            low++;
            high--;
        }
    }
    
}

void printArray(int arr[], int n){
    for(int i=0; i<n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int a[] = {6, -1, 3, 5, -2, -8, 5, 9, 7, -4};
    int n = sizeof(a)/sizeof(a[0]);
    printArray(a, n);
    reArrange(a, n);
    printArray(a, n);

    return 0;
}