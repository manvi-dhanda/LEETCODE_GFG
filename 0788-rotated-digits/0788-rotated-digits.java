class Solution {
    public int rotatedDigits(int n) {
        int count=0;
        for(int i=1;i<=n;i++)
        {
            int num=i;
            int flag=0;
            while(num>0)
            {
                int r=num%10;
                if(r==3|| r==4 || r==7)
                {
                    flag=-1;
                    break;
                }
                else
                {
                    if(r==2 || r==5 || r==6 || r==9)
                    {
                        flag=1;
                    }
                }
                num=num/10;
            }
            if(flag==1)
            {
                count++;
            }
        }
        return count;
    }
}