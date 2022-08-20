class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> v;
        int ss=0,ts=0;
        sort(nums.begin(),nums.end());
        for(auto i : nums)
            {
            ts=ts+i;
        }
        ts=ts/2;
        for(int j=nums.size()-1;j>=0;j--)
       {
            int i=nums[j];
            ss+=i;
            if(ss>ts)
                {
                v.push_back(i);
                return v;
            }
            v.push_back(i);
        }
        return v;
    }
};