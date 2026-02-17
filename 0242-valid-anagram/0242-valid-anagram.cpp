class Solution {
public:
    bool isAnagram(string s, string t) {
        int szs=s.size();
        int szt=s.size();
        if(szs!=szt)
        {
            return false;

        }
        vector<int>mp(26);
        for(char&ch:s)
        {
            ++mp[ch-'a'];
        }
        for(char&ch:t)
        {
            --mp[ch-'a'];
        }
        for(int&it:mp)
        {
            if(it!=0)return false;
        }
        return 1;
    }
};