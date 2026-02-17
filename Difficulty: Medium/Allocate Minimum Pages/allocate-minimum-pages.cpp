class Solution {
  public:
  int n;
  bool canAllocate(vector<int>&v, int k, int lt)
  {
      int student=0;
      int count=0;
      for(int i=0;i<n;i++)
      {
          if((count+v[i])<= lt)
          {
              count+=v[i];
          }
          else
          {
              ++student;
              count=v[i];
          }
      }
    //   if(lt==90) cout<<student<<' '<<count<<endl;
      return (student< k);
  }
    int findPages(vector<int> &arr, int k) {
        n=arr.size();
        if(n<k)
        {
            return -1;
        }
        int l= *max_element(begin(arr),end(arr));
        int r= accumulate(begin(arr),end(arr),0);
        int ans=-1;
        while(l<=r)
        {
            int mid= l+((r-l)>>1);
            int feasible= canAllocate(arr,k,mid);
            if(feasible)
            {
               ans=mid;
               r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
        
    }
};