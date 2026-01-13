class Solution {
public:

    int solution(int n, vector<int>&dp)
    {
        if(n==1 || n==0) return 1;
        
        //avoid resolving sub-problem
        if(dp[n]!=-1) return dp[n];
        return dp[n] = solution(n-1,dp)+solution(n-2,dp);

    }   

    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solution(n,dp);
        
    }
};