class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        int i=0;
        for(;i<n;i++)
        {
            pq.push(arr[i]);
            if(i>=k)
            {
                arr[i-k]=pq.top();
                pq.pop();
            }
        }
        for(int j=i-k;j<n;j++)
        {
            arr[j]=pq.top();
            pq.pop();
        }
    }
};