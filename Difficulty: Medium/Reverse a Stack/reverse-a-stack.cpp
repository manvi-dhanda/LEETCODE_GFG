class Solution {
  public:
  void putAtBottom(stack<int>&st,int e)
    {
        if(st.empty()){
            st.push(e);
            return;
        }
        int top=st.top();
        st.pop();
        putAtBottom(st,e);
        st.push(top);
    }
    void reverseStack(stack<int> &st) {
        // code here
        if(st.size()<2)return;
        int top=st.top();
        st.pop();
        reverseStack(st);
        putAtBottom(st,top);
    }
};