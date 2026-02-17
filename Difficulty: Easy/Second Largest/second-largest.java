class Solution {
    public int getSecondLargest(int[] arr) {
       int large=-1;
       int seclarge=-1;
       for(int i=0;i<arr.length;i++)
       {
           if(arr[i]>large)
           {
                seclarge=large;
                large=arr[i];
           }
           else if(arr[i]>seclarge && arr[i]!=large)
           {
               seclarge=arr[i];
           }
        }
       return seclarge;
       
    }
}