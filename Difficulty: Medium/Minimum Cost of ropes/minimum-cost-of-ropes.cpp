class Solution {
  public:
    int minCost(vector<int>& arr) {
      int n=arr.size();
      priority_queue<int, vector<int>, greater<int>> pq;
      for(int &it: arr)
      {
          pq.push(it);
      }
      int cost=0;
      while(pq.size()>1)
      {
          int a=pq.top();
          pq.pop();
          int b=pq.top();
          pq.pop();
          pq.push(a+b);
          cost+= a+b;
      }
      return cost;
    }
};