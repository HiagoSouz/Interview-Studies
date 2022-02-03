/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

*/

class TwoSum {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v2;
    int n = nums.size();
    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            if(n==1 && nums[i]==target){
                v2.insert(v2.begin(),i);
                return v2;
            }
            
            if(i!=j){
            if(nums[i]+nums[j] == target){
                v2.insert(v2.begin(),i);
                v2.insert(v2.begin()+1,j);
                return v2;
            }
                
            }
        }
        return v2;
    }
};
