class Solution:
    def minimumMoves(self, s: str) -> int:
        n=len(s)
        i=0
        c=0
        while(i<n):
            if(s[i]=='X'):
                c=c+1
                i=i+3
            else:
                i=i+1
        return c