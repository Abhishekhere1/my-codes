// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated number.
// Input 1: arr[] = {1,2,3,3,4}
// Output 1: 3
// Input 2: arr[] = {1,2,2,3,4,5}
// Output 2: 2


#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
int low = 1, high = nums.size() - 1, cnt;
while(low <= high){
int mid = low + (high - low) / 2;
cnt = 0;
// cnt number less than equal to mid
for(int n : nums)
{
if(n <= mid)
++cnt;
}
// binary search on left
if(cnt <= mid)
low = mid + 1;
else
// binary search on right
high = mid - 1;
}
return low;
}