class Solution {
    public boolean isAnagram(String s, String t) {
        int szs=s.length();
        int szt=t.length();
        if(szs!=szt)
        {
            return false;

        }
        int[] mp = new int[26];
        for (char ch : s.toCharArray())
        {
            mp[ch - 'a']++;
        }
        for (char ch : t.toCharArray()) 
        {
            mp[ch - 'a']--;
        }
        for (int it : mp)
        {
            if (it != 0)
            return false;
        }
        return true;
    }
}

        