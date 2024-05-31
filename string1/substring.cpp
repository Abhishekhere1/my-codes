#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    // string s = "abcdef";
    // // s.substr(idx, len)
    // cout<<s.substr(2);
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    // abcdefgh -> n = 8
    int n = str.length();
    cout<<str.substr(n/2);
}