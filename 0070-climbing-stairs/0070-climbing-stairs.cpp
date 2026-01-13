class Solution {
public:

    int solution(int n)
    {
        int prev2 = 1;
        int prev = 1;
        int curi;

        for(int i=2;i<=n;i++)
        {
            curi = prev2+prev;
            prev2 = prev;
            prev = curi;

        }


        return prev;
        
        


    }   

    int climbStairs(int n) {
        // vector<int>dp(n+1,-1);
        return solution(n);
        
    }
};