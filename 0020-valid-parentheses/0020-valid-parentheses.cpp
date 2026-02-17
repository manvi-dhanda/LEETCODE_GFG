class Solution {
public:
    bool isValid(string s) {
        int sz=s.size();
        stack<char> st;
        for (int i=0;i<sz;i++){
            if(s[i]=='(' || s[i]== '{' || s[i]== '['){
                st.push(s[i]);
                continue;
            }
            if(st.empty()){
                return false;
            }
            if(s[i]==')' && st.top()!= '(') return false;
            if(s[i]=='}' && st.top()!= '{') return false;
            if(s[i]==']' && st.top()!= '[') return false;
            st.pop();
        }
        return st.empty();
    }
};