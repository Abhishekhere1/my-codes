// Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If
// ‘x’ does not exist return -1.
// Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
// Output 1: 6

#include<bits/stdc++.h>
using namespace std;
int lastOccurrence(vector<int>&a , int tgt) {
int low = 0 , high = a.size() - 1;
int answer = -1;
while(low <= high){
int mid = low + (high - low)/2;
if(a[mid] <= tgt){
answer = mid;
low = mid + 1;
}
else high = mid - 1;
}
return answer;
}
int main(){
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)cin>>a[i];
int tgt;
cin>>tgt;
}