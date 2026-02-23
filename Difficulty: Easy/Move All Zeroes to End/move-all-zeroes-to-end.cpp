class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
       int sz = arr.size();


       for (int prev = 0, cur = 0; cur < sz; ++cur) {
           if (arr[cur] == 0) {
               continue;
           }


           swap(arr[prev], arr[cur]);
           ++prev;
       }
   }
};