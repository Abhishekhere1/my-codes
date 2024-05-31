#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str= "Abhishek";
    // cout<<str;
    string s;
    // cin>>s; //only if the given string has no soaces
    getline(cin, s); // VVIMP
    cout<<s;
}