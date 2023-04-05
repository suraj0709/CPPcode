#include<iostream>
using namespace std;

void reverseString(string &name, int s, int e){
    //base case
    if(s>e) return;

    swap(name[s], name[e]);
    s++;
    e--;

    //recursive call
    reverseString(name, s, e);
    
}

int main(){

    string name = "SURAJ";
    reverseString(name, 0, name.length()-1);
    cout << name << endl;

    return 0;
}