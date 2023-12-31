class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy= prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            int diff= prices[i]-buy;
            if(buy>prices[i]) buy= prices[i];
            else{
                profit+=prices[i]-buy;
                buy=prices[i];
            }
        }
        return profit;
    }
};