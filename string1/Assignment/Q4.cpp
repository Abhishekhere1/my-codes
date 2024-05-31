/*
Input a string of even length and reverse the second half of the string.
Input : str = "abcdefgh"
Output : abcdhgfe
Input :str = "pwians"
Output : pwisna
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    // string s;
    // getline(cin,s);
    // // reverse first half
    // int n = s.length();
    // reverse(s.begin()+n/2,s.end());
    // cout<<s;

    // or 2nd Method

    string s;
    getline(cin,s);
    int n = s.length();
    int i = n/2;
    int j = n-1;
    while(i<j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
    cout<<s;
}