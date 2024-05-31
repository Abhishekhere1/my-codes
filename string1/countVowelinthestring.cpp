/*
Q) Input a string of length n and count all the vowels in the given string.
*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int n;
    int count = 0;
    cin>>n;
    char str[n];
    for(int i = 0; i<n; count++)
        cin>>str[i];
    
    int i = 0;
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]== 'u')
        count++;
        //cout<<str[i];
        i++;
    }
    cout<<count;
}


/*Doubt -- Answer is not comming */