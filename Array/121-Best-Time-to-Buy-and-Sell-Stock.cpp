// p[0] = 0
// p[i] = max ( 
//               0,
//               p[i-1],  // do not sell on day i 
//               prices[i] - min(price[0: i-1]) // sell on day i
//             )

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int min_price = prices[0];
        for(size_t i = 0; i < prices.size(); ++i){
            int profit = prices[i] - min_price;
            if(profit > max_profit){
                max_profit = profit;
            }
            if(prices[i] < min_price){
                min_price = prices[i];
            }
        }
        return max_profit;
    }
};
