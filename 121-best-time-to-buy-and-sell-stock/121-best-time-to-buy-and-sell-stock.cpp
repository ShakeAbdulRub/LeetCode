class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=INT_MAX;
        int mp=0,n=prices.size();
        for(int i=0;i<n;i++)
        {
            if(prices[i]<minp)
            {
                minp=prices[i];
            }
            else if(prices[i]-minp>mp)
            {
                mp=prices[i]-minp;
            }
        }
        return mp;
        
    }
};