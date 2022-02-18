/* Given a non-empty array of integers nums, every element appears twice except for one. Find that single one. */

int singleNumber(vector<int>& nums) {
    int n = nums.size();
    
     sort(nums.begin(), nums.end());
    
    for(int i=0;i<n;i++)
        if(i%2==0 && (nums[i]!=nums[i+1] || i==n))
            return nums[i];
    
    return nums[n];
    }
