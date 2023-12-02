/*WAP to print the sum of all the even digits of a given number.
Sample Input : 4556
Output: 10*/

#include<bits/stdc++.h>
using namespace std;

int main( ){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int sum = 0;
    while(n>0){
        int ld = n%10;
        if(ld%2 == 0 ) sum +=ld;
        n /= 10;
    }
    cout << sum;
   
}