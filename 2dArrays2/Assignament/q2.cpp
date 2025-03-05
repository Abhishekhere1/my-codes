// Write a program to rotate the matrix by 90 degrees anti-clockwise.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 3 6 9
// 2 5 8
// 1 4 7

#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)cin>>a[i][j];
}
// let's first calculate the transpose of the given matrix
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(i <= j)swap(a[i][j] , a[j][i]);
}
}
for(int j=0;j<n;j++){
for(int i=0;i<n/2;i++){
swap(a[i][j] , a[n-i-1][j]);
}
}
return 0; 
}
