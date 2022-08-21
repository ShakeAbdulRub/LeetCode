class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int n=cost.size()-1;
        int s=0;
        int c=0;
        while(n>=0)
        {
            c++;
            if(c==3)
            {
                c=0;
            }
            else
            {
                s=s+cost[n];
            }
            n--;
            
        }
        return s;
    }
};