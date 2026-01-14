class Solution {
public:

    int minCostClimbingStairs(vector<int>& cost) {
        //using optimised tabularisation...
        int n = cost.size();
        int prev2i = 0;
        int prev = 0;
        //can start with 0 or 1
        for(int i=2;i<=n;i++)
        {
            int step1 = prev+cost[i-1];
            int step2 = prev2i + cost[i-2];
            

            int curi = min(step1,step2);
            prev2i = prev;
            prev = curi;


        }


        return prev;
        
    }
};