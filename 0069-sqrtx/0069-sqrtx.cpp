class Solution {
public:
    int mySqrt(int x) {
         long l=0;
        long r=x;
        long ans= -1;
        while(l<=r)
        {
            long n= l+((r-l)>>1);
            long sq= n*n;
            if(sq<x)
            {
                l=n+1;
                ans=n;
            }
            else if(sq > x)
            {
                r=n-1;
            }
            else
            {
                ans=n;
                break;
            }
        }
        return ans;
    }
};