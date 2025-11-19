class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int left = 0;
        int minLen = INT_MAX;
        long long currentSum = 0;

        for(int right=0;right<nums.size();right++){
            
            currentSum+=nums[right];

            while(currentSum>=target)
            {
                currentSum-=nums[left];
                minLen = min(minLen,right-left+1);
                left++;
            }

            
        }



        return (minLen == INT_MAX) ? 0 : minLen;
        
    }
};