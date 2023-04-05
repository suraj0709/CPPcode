#include<iostream>
using namespace std;

bool isPalindrome(string str, int s){
    //base Case
    if(s>str.length()-s-1) return true;

    if(str[s] == str[str.length()-s-1])
        return isPalindrome(str, s+1);
    else
        return false;
}

int main(){
    
    string str = "abcdedba";

    if (isPalindrome(str, 0))
    {
        cout << "It's a Palindrome" << endl;
    }else{
        cout << "It's not a Palindrome" << endl;
    }
    

    

    return 0;
}