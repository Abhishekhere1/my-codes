// Write a program to print the matrix in wave form.
// Input :
// 1 2 3
// 4 5 6
// 7 8 9
// Output : 7 4 1 2 5 8 9 6 3

#include<iostream>
using namespace std;
int main(){
int n , m;
cout << "Enter the number of rows : ";
cin >> n;
cout << "Enter the number of columns : ";
cin >> m;
int a[n][n];
cout << "Enter the matrix elements : "<<endl;
for(int i = 0 ; i < n ; i++){
for(int j = 0 ; j < m ; j++){
cin >> a[i][j];
}
}
cout<<"Elements in the wave form are: "<<endl;
for(int j = 0 ; j < m ; j++){