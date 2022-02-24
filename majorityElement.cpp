/* 

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

*/

 int majorityElement(vector<int>& nums) {
   
    sort(nums.begin(),nums.end());
   
    int n = nums.size();
   
    return nums[n/2];
   
}
