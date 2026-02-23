class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> result;
        if (s.size() < p.size()) return result;

        vector<int> freqP(26, 0);
        vector<int> freqS(26, 0);

        for (char c : p)
            freqP[c - 'a']++;

        int window = p.size();

        for (int i = 0; i < s.size(); i++) {

            freqS[s[i] - 'a']++;

            if (i >= window)
                freqS[s[i - window] - 'a']--;

            if (freqS == freqP)
                result.push_back(i - window + 1);
        }

        return result;
    }
};