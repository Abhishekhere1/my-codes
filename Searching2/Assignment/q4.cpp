// There is an integer array nums sorted in non-decreasing order (not necessarily with
//   distinct values).
//   Before being passed to your function, nums is rotated at an unknown pivot index k ( 0 <= k
//   < nums.length ) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1],
//   nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example,
//   [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become
//   [4,5,6,6,7,0,1,2,4,4] .
//   Given the array nums after the rotation and an integer target , return true if target is in
//   nums , or false if it is not in nums .
//   You must decrease the overall operation steps as much as possible. [Leetcode 81]
//   Example 1:
//   Input: nums = [2,5,6,0,0,1,2], target = 0
//   Output: true
//   Example 2:
//   Input: nums = [2,5,6,0,0,1,2], target = 3
//   Output: false

bool search(vector<int>& a, int tgt) {
  int low = 0 , hi = a.size() - 1;
  while(low <= hi){
  int mid = low + (hi - low)/2;
  if(a[mid] == tgt)return true;
  else if(a[low] == a[mid] and a[mid] == a[hi]){
  low++;
  hi--;
  }
  else if(a[low] <= a[mid]){
  if(a[low] <= tgt and tgt <= a[mid])hi = mid - 1;
  else low = mid + 1;
  }
  else {
  if(a[mid] <= tgt and tgt <= a[hi])low = mid + 1;
  else hi = mid - 1;
  }
  }
  return false;
  }