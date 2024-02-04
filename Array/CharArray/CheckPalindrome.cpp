#include<iostream>
using namespace std;
bool checkPalindrome(string s){
    int start = 0,end=s.length()-1;
    bool sol=true;
    while(start<end){
        if(s[start]!=s[end]){
            sol=false;
            break;
        }
        else {
            start++;
            end--;
        }
    }
    return sol;

}
int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    if(checkPalindrome(s))cout<<s<<" is a palindrome.";
    else cout <<s<< " is NOT a palindrome.";
}