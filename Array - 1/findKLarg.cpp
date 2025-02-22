// C++ program to find k largest elements in an array using sorting

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> kLargest(vector<int> &arr, int k){

  //sort the given array in descending order
  sort(arr.begin(), arr.end(), greater<int>());

  //sort the first k element in result array
  vector<int> res(arr.begin(), arr.begin()+k);
  return res;
}

int main(){
  int n,k;
  
  //take input for n
  cin>>n;
  vector<int> arr(n);

  //Take input for array elements
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  //take input for k
  cin>>k;

  // Validate k
  if(k>n){
    cout<<"Invalid value of k "<<endl;
    return 1;
  }
  

  vector<int> res = kLargest(arr,k);

  //Print k largest elements
  for(int ele: res)
        cout<<ele<<" ";

  return 0;
}