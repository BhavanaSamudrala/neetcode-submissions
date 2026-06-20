class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_price = prices[0];
        
        int profit = 0; 

        for(int i=1; i < prices.size(); i++){
            int curr_price = prices[i];

            if (curr_price < buy_price){
                buy_price = curr_price;
            }
            else{
                profit = max(profit, curr_price - buy_price);
            }

            
        }

        return profit;

    }
};
