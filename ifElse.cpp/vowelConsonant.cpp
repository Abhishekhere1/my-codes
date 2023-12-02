// Ques : Write a program to check whether a
// given character is a vowel or a consonant.

#include<iostream>
 using namespace std;
 int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    // a to z -> 97 to 122
    //A to Z -> 65 to 90
    int ascii = (int)ch;
    if((ascii >= 97 && ascii <= 122) || (ascii >= 65 && ascii <= 90)){
        if( ch=='a'  ||  ch=='e'  ||  ch=='i'  ||  ch=='o'  ||  ch=='u' ){
            cout<<"The character is a vowel";
        }
        else{
            cout<<"The character is a consonant";
        }
    }
    else{
        cout<<"The character is not an alphabet";
    }
 }