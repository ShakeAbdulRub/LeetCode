class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int curs=0;
        int c=0;
        unordered_map<int,int> ps;
        for(int i=0;i<nums.size();i++)
        {
            curs=curs+nums[i];
            if(curs==k)
            {
                c++;
            }
            if(ps.find(curs-k)!=ps.end())
            {
                c=c+ps[curs-k];
            }
            ps[curs]++;
        }
        return c;
    }
};