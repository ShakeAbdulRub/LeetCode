class Solution {
public:
    string maximumTime(string time) {
        for(int i=0;i<time.size();i++)
        {
            if(time[i]=='?')
            {
                if(i==0)
                {
                    if( time[i+1]!='?' && time[i+1]!='0' && time[i+1]!='1' && time[i+1]!='2' && time[i+1]!='3')
                    {
                        time[i]='1';
                    }
                    else
                    {
                        time[i]='2';
                    }
                }
            if(i==1)
            {  // cout<<(time[i-1]);
                if(time[i-1]=='1' || time[i-1]=='0')
                {
                    time[i]='9';
                }
                else
                {
                    time[i]='3';
                }
            }
            if(i==3)
            {
                time[i]='5';
            }
            if(i==4)
            {
                time[i]='9';
            }
                
            }
        }
        return time;
    }
};