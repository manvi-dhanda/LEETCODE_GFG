class Solution {
public:
    bool isSubsequence(string s, string t) {
        int szs=s.size();
        int szt=t.size();
        int ptrS=0;
        for(int i=0;i<szt && ptrS<szs;i++)
        {
            if(s[ptrS]==t[i])
            {
                ++ptrS;
            }

        }
        return (ptrS==szs);
    }
};