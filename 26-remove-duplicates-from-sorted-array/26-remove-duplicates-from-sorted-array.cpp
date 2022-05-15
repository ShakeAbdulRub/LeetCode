class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size()-1,i=0;
        vector<int>::iterator t;
        for(i=0;i<n;i++)
        {
            if(nums[i]==nums[i+1])
            {
                 t=nums.begin()+i;
                nums.erase(t);
                i=-1;
                n=n-1;
            }
      }
        return nums.size();
        
    }
};