#include<iostream>
#include<map>
using namespace std;

int main(){
    string str = "aabbcccdd";

    map<char, int> map;

    for(int i=0; str.length(); i++){
        map[str[i]]++;
    }

    for(auto it : map){
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}