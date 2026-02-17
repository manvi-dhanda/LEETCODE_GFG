class Solution {
  public:
    int sz;
    void delMid(stack<int>&st,int ind){
        if(ind==(sz+1)/2){
            st.pop();
            return;
        }
        int top=st.top();
        st.pop();
        delMid(st,ind-1);
        st.push(top);
    }
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        sz=s.size();
        delMid(s,sz);
        
    }
};