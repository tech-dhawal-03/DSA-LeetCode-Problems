class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeroes = 0;
        int left = 0;
        int right = 0;
        int maxLen = 0;
        

        for(right;right<nums.size();right++)
        {
            if(nums[right]==0)
            {
                zeroes++;
                while(zeroes>k)
                {
                    //shrink the window
                    if(nums[left]==0)zeroes--;
                    left++;
                   

                }


             

            }
           

            maxLen = max(maxLen,right-left+1);

        }

        return maxLen;
        
    }
};