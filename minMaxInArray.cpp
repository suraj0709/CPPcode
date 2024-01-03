#include<iostream>
#include <climits>
using namespace std;

int main(){

    int arr[] = {3,5,5,2,1,9,7,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];
    cout<< size<<endl;
    for (int i = 1; i < size; i++)
    {
        if(arr[i] <= min){
            min = arr[i];
            continue;
        }
        if(arr[i]>max) max =  arr[i];
    }
    
    cout << "MIN is " << min << endl;
    cout << "MAX is " << max << endl;
    return 0;
}