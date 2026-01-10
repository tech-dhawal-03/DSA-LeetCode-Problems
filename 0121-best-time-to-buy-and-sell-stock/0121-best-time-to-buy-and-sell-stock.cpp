class Solution {
public:
    int maxProfit(vector<int>& prices) {

    //lets consider first price as the buying price...

    int buyed = prices[0];
    int max_profit = 0;

    //check for the maximum profit while looping

    for(int i=1;i<prices.size();i++)
    {   

        //if price[i] is smaller than the buyed...
        if(prices[i]<buyed) buyed = prices[i];


        else{
            int profit = prices[i]-buyed;
            max_profit = max(profit,max_profit);
        }


        
    }


        return max_profit;
        
        
        
    }
};