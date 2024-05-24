/*
Write a function which accepts a 2D array of integers and its size as arguments and displays the
elements of middle row and the elements of middle column.
[Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]
Input 1:
1 2 3 4 5
3 4 5 6 7
7 6 5 4 3
8 7 6 5 4
1 2 37 8 0
Output 1:
3
5
7 6 5 4 3
6
*/

#include <iostream>
using namespace std;
int main()
{
int m;
cout<<"enter rows/cols : ";
cin>>m;
int a[m][m]; // square matrix
cout<<"Enter elements of the Matrix: " <<endl;
for(int i = 0; i<m ; i++){
    for(int j = 0; j<m; j++){
        cin>>a[i][j];
    }
}
// printing middle row and col
for(int i = 0; i<m ; i++){
    for(int j = 0; j<m; j++){
        if(i==m/2 or j==m/2)
        cout<<a[i][j]<<" ";
        else
        cout<<" "<<" ";
    }
    cout<<endl;
}
}