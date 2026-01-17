class Solution {
public:
    int rob(vector<int>& nums) {

        int curri;
        int prev = nums[0];
        int prev2 = 0;

        for(int i=1;i<nums.size();i++)
        {
            int rob = nums[i];
            if(i>1) rob+=prev2;

            int not_rob = prev;
            curri = max(rob,not_rob);

            prev2 = prev;
            prev = curri;
            
        }
        

        return prev;
    }
};