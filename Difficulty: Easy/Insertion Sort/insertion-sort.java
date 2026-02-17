class Solution {
    // Please change the array in-place
    public void insertionSort(int arr[]) {
        int l=arr.length;
        for(int i=0;i<l;i++)
        {
            int key=arr[i];
            int j=i-1;
            while(j>-1 && arr[j]>key)
            {
                arr[j+1]=arr[j];
                --j;
            }
            arr[j+1]=key;
        }
        
    }
}