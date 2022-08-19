class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int c1=0,c2=0;
        for(int i=0;i<position.size();i++)
        {
            c1+=(position[i]%2==0);
            c2+=(position[i]%2!=0);
        }
        return min(c1,c2);
    }
};