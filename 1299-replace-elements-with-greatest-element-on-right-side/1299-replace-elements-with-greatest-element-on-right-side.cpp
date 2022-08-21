class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int maxi=arr[n-1];
        arr[n-1]=-1;
        int t=0;
        n=n-2;
        while(n>=0)
        {
            t=maxi;
            maxi=max(maxi,arr[n]);
            arr[n]=t;
            n--;
        }
        return arr;
    }
};