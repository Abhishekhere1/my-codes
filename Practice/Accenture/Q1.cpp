/*Q1. Ann recently began using the metro to work. We are aware that a single ride on the metro costs one ruble. Ann also learned that she can purchase a unique ticket for the rides (she can buy it several times). The price is b rubles. Ann calculated that she would need to take the subway n times. Help Ann out by letting her know how much money she must have in order to buy n rides.

Input
The four numbers n, m, a, b (1 n, m, a, b 1000) on a single line represent the number of rides Ann has scheduled, the number of rides covered by the m ride ticket, the cost of a one ride ticket, and the cost of a m ride ticket.

Output
Print a single integer.
the minimum sum in rubles that Ann will need to spend.

Input 1: 
6 2 1 2          

Output:
6


Input 2: 
5 2 2 3

Output:
9


*/



/*
Q2. Floyd's Triangle Pattern
You have been given an integer N as input your task is to write a program to print N rows of Floyd's Triangle pattern. Floyd's Triangle is a right-angled triangular array of natural numbers, used for the numbering of lines in a printout.

For N = 4

1
2 3
4 5 6
7 8 9 10 

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
      cout<<i+j+1<<" ";
      
  }
  cout<<endl;
}

return 0;
}