#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    // string str = "raghav garg is at PW";
    // cout<<str.length();  // 0 to str.length() - 1
    // int len = str.length();

    // string str = "abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // cout<<str<<endl;

    // string s = "raghav";
    // cout<<s<<endl;
    // s.pop_back();
    // s.pop_back();
    // s.pop_back();
    // cout<<s<<endl;

    // string s = "abc";
    // cout<<s<<endl;
    // s = "before" + s + "After";
    // cout<<s<<endl;

    string s = "abcdef"; // 0 1 2 3 4 5
    cout<<s<<endl;
    reverse(s.begin()+2,s.begin()+5);
    cout<<s<<endl;
}


