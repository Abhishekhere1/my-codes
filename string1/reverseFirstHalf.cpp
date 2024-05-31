#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // reverse first half
    int n = s.length();
    reverse(s.begin(),s.begin()+n/2);
    cout<<s;
}