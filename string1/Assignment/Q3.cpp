/*
Check whether the given string is palindrome or not.
Input : "abcde"
Output : No
Input : "abcdcba"
Output : Yes
*/

// #include<iostream>
// using namespace std;
// bool isPalindrome(string s){
//     int j = 0;
//     int j = s.length()-1;
//     while(i<j){
//         if(s[i]!=s[j]) return false;
//         i++;
//         j--;
//     }
//     return true;
// }
// int main(){
//     string s;
//     getline(cin,s);
//     if(isPalindrome(s)==true)
//         cout<<"String is palindrome";
//     else
//         cout<<"String is not palindrome";
// }

// /*doubt see youTube 
// concept is not cleared by raghav sir*/

#include <bits/stdc++.h>
using namespace std;
bool check(string &s) {
int i = 0, j = (int)s.size() - 1;
while (i <= j) {
if (s[i] != s[j]) return false;
i++, j--;
}
}
int main() {
int n;
cin >> n;
string s;
cin >> s;
cout << (check(s) ? "YES" : "NO");
}