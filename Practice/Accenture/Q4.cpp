/*
Q4. Rohan is a kid who has just learned about creating words from alphabets. He has written some words in the notepad of his father's laptop. Now his father wants to find the longest word written by Rohan using a computer program. Write a program to find the longest string in a given list of strings.

Example:
Input: yes no number
Output: The longest string is: number
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cin>>str;
  str sum1 ='';
  str sum2 ='';
  for(int i=0; i<str.length()-1; i++){
    sum1 = str[i];
   
    if(str =" ")
    break;

    sum2 = sum1;
    if(sum1>sum2){
      sum2 = sum1;
      }
      cout<<sum2;
  }
}
  