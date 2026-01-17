class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,0);
        

        //using tabularation

        dp[0] = nums[0];
        //storing value...

        for(int i=1;i<n;i++)
        {
            int rob = nums[i];
            if(i>1) rob+=dp[i-2];
            //take money from this house and move to a house leaving one house...

            int not_rob = dp[i-1];
            //no money from this house, move to adjacent one....

            dp[i] = max(rob,not_rob);
        }


        return dp[n-1];
        
    }
};