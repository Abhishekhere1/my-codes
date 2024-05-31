/*
Q). : Input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt functions.
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    // reverse the substring from 2 to 5
    int n = str.length();
    reverse(str.begin() + 1,str.begin()+5);
    cout<<str;
}