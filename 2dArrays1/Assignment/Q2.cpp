/*Write a program to add two matrices and save the result in one of the given matrices.
Input 1:
1 2 3
4 5 6
7 8 9

4 5 8
0 0 8
1 2 0
Output 1:
5 7 11
4 5 14
8 10 9
*/

#include<iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of columns : ";
    cin>>n;
    int a[m][n], b[m][n];
    cout<<"Enter elements of 1st Matrix"<<endl;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>a[i][j];  
        }
    }
    cout<<"Enter elements of 2nd Matrix"<<endl;
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>b[i][j];
        }
    }
    cout<<endl;
    // addition 
    for( int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            b[i][j] += a[i][j];
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}