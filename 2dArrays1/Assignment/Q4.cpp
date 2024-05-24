/*
Write a program to print the row number having the maximum sum in a given matrix.
Input 1:
1 3 5 7
3 4 7 8
1 4 12 3
Output 1: 2
Explanation : The 2nd row has the maximum sum i.e. 1+4+12+3 = 20
*/

#include <iostream>
#include <limits>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter rows : ";
    cin >> m;
    cout << "Enter columns : ";
    cin >> n;
    int a[m][n];
    cout << "Enter elements of 1st Matrix" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    
    int maxSum = INT_MIN;
    int maxRow = -1;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j <= n; j++)
        {
            sum += a[i][j];
        }
        if(sum>maxSum){
            maxSum = sum;
            maxRow = i;
        }
    }
    cout << maxSum<<" "<<maxRow;
}
