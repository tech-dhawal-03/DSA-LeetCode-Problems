class Solution {
public:
    int ans;
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int length = 0;

        //traversing arr in O(N)

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)length++;
            else
            {
                //zero
                ans = max(ans,length);
                length = 0;

            }
        }

       
        
        return max(ans,length);
    }
};