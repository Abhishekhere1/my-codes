// Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]

// Output 1: 2

#include <bits/stdc++.h>
using namespace std;
int firstOccurrence(vector<int>&a , int n , int tgt){
int low = 0 , high = n - 1;
int ans = -1;
while(low <= high){
int mid = low + (high - low)/2;
if(a[mid] == tgt){
ans = mid;
high = mid - 1;
}
else low = mid + 1;
}
return low;
}
int main() {
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)cin>>a[i];
cout<<n - firstOccurrence(a , n , 1);
}