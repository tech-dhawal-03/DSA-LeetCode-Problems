class Solution {
public:
    // int optimised_tribonacci(int n, vector<int>&dp)
    // {
    //     if(n==0) return 0;
    //     if(n==1 or n==2) return 1;

    //     //solving overlapping problem
    //     if(dp[n]!=-1) return dp[n];

    //     return dp[n] = tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);

    // }

    int tribonacci(int n) {

        int prev3 = 0;
        int prev2 = 1;
        int prev = 1;

        for(int i=3;i<=n;i++)
        {
            int curri = prev3+prev2+prev;
            prev3 = prev2;
            prev2 = prev;
            prev = curri;
        }

        if(n==0) return 0;
        return prev;

       



        
    }
};