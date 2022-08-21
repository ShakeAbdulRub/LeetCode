class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n= colors.size();
        int i=n-1;
        int j=0,s1=0,s2=0,l=0,r=0;
        while(i>0 && j<n)
        {
            if(colors[0]!=colors[i] && l==0)
            {
                s1=i;
                l=1;
            }
            if(colors[n-1]!=colors[j] && r==0)
            {
                s2=abs(n-1-j);
                r=1;

            }
            if(r!=0 && l!=0)
            {
                return max(s1,s2);
            }
            i--;
            j++;
        }
        return 0;
    }
};