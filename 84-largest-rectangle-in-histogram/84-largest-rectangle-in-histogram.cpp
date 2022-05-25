class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxarea=0;
        stack<int>s;
        int n= heights.size();
        int l[n],r[n];
        for(int i=0;i<n;i++)
        {
            if(s.empty())
            {
                l[i]=0;
                s.push(i);
            }
            else
            {
                while(!s.empty() && heights[s.top()]>=heights[i])
                {
                    s.pop();
                }
                l[i]=s.empty()?0:s.top()+1;
                s.push(i);
            }
        }
        while(!s.empty())
        {
            s.pop();
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s.empty())
            {
                r[i]=n-1;
                s.push(i);
            }
            else
            {
                while(!s.empty() && heights[s.top()]>=heights[i])
                {
                    s.pop();
                }
                r[i]=s.empty()?n-1:s.top()-1;
                s.push(i);
            }
        }
        maxarea=(r[0]-l[0]+1)*heights[0];
        for(int i=1;i<n;i++)
        {
            int x=(r[i]-l[i]+1)*heights[i];
            if(x>maxarea)
            {
                maxarea=x;
            }
            
        }
        return maxarea;
        
    }
};