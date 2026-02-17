class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int sz= nums.size();

        stack<int> st;
        vector<int> ans(sz,-1);

        for(int i=0; i<2*sz; ++i){
            while(!st.empty() && nums[i%sz] > nums[st.top()]){
                ans[st.top()]= nums[i%sz];
                
                st.pop();
            }
            st.push(i%sz);
        }

        
        return ans;
    }
};