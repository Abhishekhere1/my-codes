/*
Input a string of length less than 10 and convert it into integer without using builtin function.
Input : "3244"
Output : 3244
Input : "12"
Output : 12

*/

#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int x = 0;
    int n = s.length();
    for(int i = 0; i<n; i++){
        x *= 10;
        x += (s[i] - 48); // s[i] is char
    }
    cout<<x;

    // // using builtin function
    // string s;
    // getline(cin,s);
    // int x = stoi(s);
    // cout<<x;
    
}