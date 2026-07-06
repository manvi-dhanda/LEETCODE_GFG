class Solution {
    public int nthUglyNumber(int n) {
        // int num=0;
        // int count=0;
         
        // while(count<n)
        // {
        //     num++;
        //     int temp=num;
        //     while(temp>0 && temp%2==0)
        //     {
        //         temp=temp/2;
        //     }
        //     while(temp>0 && temp%3==0)
        //     {
        //         temp=temp/3;
        //     }
        //     while(temp>0 && temp%5==0)
        //     {
        //         temp=temp/5;
        //     }
        //     if(temp==1)
        //     {
        //         count++;
        //     }
        // }
        // return num;
        int a=0;
        int b=0;
        int c=0;
        int arr[]= new int[n];
        arr[0]=1;
        for(int i=1;i<n;i++)
        {
            int x= arr[a]*2;
            int y= arr[b]*3;
            int z= arr[c]*5;
            arr[i]=Math.min(x,Math.min(y,z));
            if(arr[i]==x)
            {
                a++;
            }
            if(arr[i]==y)
            {
                b++;
            }
            if(arr[i]==z)
            {
                c++;
            }

        }
        return arr[n-1];
    }

}