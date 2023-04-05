#include<iostream>
using namespace std;

int binarySearch(int *input, int s, int e, int k){
    //base case
    if(s>e) return -1;

    int mid = s+ (e-s)/2;

    //element found
    if(input[mid] == k) return mid;

    //recursive call
    if(input[mid] < k) binarySearch(input, mid+1, e, k);
    else binarySearch(input, s, mid-1, k);
}

int main(){
    cout << "Searching of element using Binary Search & Recursion : " << endl ;

    int arr[] = {2,3,4,5,6,7,8};
    int  k = 7;
    cout << binarySearch(arr, 0, sizeof(arr)/sizeof(int), k) << endl;
    return 0;
}