/*WAP to print the sum of a given number and its reverse.
Sample Input : 12
Sample Output : 33 [12+21]*/
#include<bits/stdc++.h>
using namespace std;
int main( ){
         int n;
         cout<<"Enter a number : " ;
         cin>>n;
         int r = 0 ;
         int x = n ;
         while(n>0){
            int ld = n%10;
            r *= 10;
            r += ld;
            n /= 10;
         }
         cout<<r+x;
}