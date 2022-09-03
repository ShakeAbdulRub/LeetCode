class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=-1e8,sum1=0,maxi=-1e8,f=0;
        for(int i : nums)
        {
            if(i>0) f=1;
            maxi=max(maxi,i);
            sum1=sum1+i;
            if(sum1>sum) sum=sum1;
            if(sum1<0)sum1=0;
        }
        if(f==0)
        {
            return maxi;
        }
        return sum;
        
        
    }
};