class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int profit=0;
        for(int x:prices)
        {
            if(x<min)
            {
                min=x;
            }
            if((x-min)>profit)
            {
                profit=x-min;
            }
        }
        return profit;
    }
};