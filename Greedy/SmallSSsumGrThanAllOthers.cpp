//Smallest subset sum greater than all others
#include<bits/stdc++.h>
using namespace std;

int minElements(vector<int>& arr){

  int totalSum = accumulate(arr.begin(), arr.end(),0);

  sort(arr.begin(), arr.end(), greater<int>());

  int res = 0, currSum = 0;
  for(int x : arr){
    currSum += x;
    res++;

    if(currSum>totalSum - currSum)
    return res;

  }
  return res;

}

int main(){
  vector<int> arr = {3,1,7,1};
  cout<<minElements(arr)<<endl;
  return 0;
}