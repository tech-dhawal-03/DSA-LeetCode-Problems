class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int min_buying_price = prices[0];
        int max_profit = 0;

        for(int i=1;i<prices.size();i++){

            if(prices[i]<min_buying_price){
                min_buying_price = prices[i];
            }

            else
            {
                int profit = prices[i]-min_buying_price;
                max_profit = max(profit,max_profit);
            }


          

        }

          return max_profit;
        
    }
};