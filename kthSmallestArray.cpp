#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {7, 10, 4, 3,20,15};
    int k = 3;
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

cout<< endl;
    cout << arr[k-1];
    return 0;
}