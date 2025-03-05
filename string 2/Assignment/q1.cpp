// Input a string and concatenate with its reverse string and print it.
// Input : str = "PWSkills"
// Output : "PWSkillssllikSWP"
// Input : str = "pw"
// Output : "pwwp"

#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin >> s;
string temp = s;
reverse(temp.begin(), temp.end());
s += temp;
cout << s << '\n';
}