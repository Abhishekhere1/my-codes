/*Count the number of triplets whose sum is equal to the given value x.*/
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,2,5,4,6,7};
    int n = sizeof(arr)/4;
    int product = 1;
    for(int i = 0; i<n; i++){
        product *= arr[i];
    }
    cout<<product;
}