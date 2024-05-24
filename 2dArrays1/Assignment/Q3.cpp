/*
Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
rectangle from (l1,r1) to (l2, r2).
Input 1:
1 2 -3 4
0 0 -4 2
1 -1 2 3
-4 -5 -7 0
l1 = 1, r1 = 2 , l2 = 3 , r2 = 3
Output 1: -4
Input 2:
1 2 -3 4

0 0 -4 2
1 -1 2 3
-4 -5 -7 0
l1 = 1, r1 = 0 , l2 = 0 , r2 = 3
Output 1: 2
*/

#include<iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"Enter rows : ";
    cin>>m;
    cout<<"Enter columns : ";
    cin>>n;
    int a[m][n];
    cout<<"Enter elements of 1st Matrix"<<endl;
    for(int i = 0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    int x1, y1, x2, y2;
    cout<<"Enter the 1st coordinate : "<<endl;
    cin>>x1>>y1;
    cout<<"Enter the 2nd coordinate : "<<endl;
    cin>>x2>>y2;
    int sum = 0;
     // sum
     for(int i =x1 ; i<x2; i++ ){
        for(int j = y1; j<=y2; j++){
            sum += a[i][j];
        }
     }
     cout<<sum;
}


