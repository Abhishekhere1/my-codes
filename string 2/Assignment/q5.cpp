// Given a sentence ‘str’, return the word that is lexicographically maximum.
// Input : str = "proud to be pwians"
// Output : pwians
// Input : str = "decode dsa with pw"
// Output : with

#include <bits/stdc++.h>
using namespace std;
int main() {
string str ;
getline(cin , str); //method to input a string with spaces
int n = str.size();
string mx = "", word = "";
for (int i = 0; i < n; i++) {
if (str[i] == ' ') {
mx = max(mx, word);
word = "";
} else {
word += str[i];
}
}
mx = max(mx, word);
cout << mx << '\n';
}