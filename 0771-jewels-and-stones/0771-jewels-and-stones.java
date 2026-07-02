class Solution {
    public int numJewelsInStones(String jewels, String stones) {
      int n=jewels.length();
      int m=stones.length();
      HashSet<Character> set= new HashSet<>();
      for(int i=0;i<n;i++)
      {
        set.add(jewels.charAt(i));
      }
      int count=0;
      for(int i=0;i<m;i++)
      {
        if(set.contains(stones.charAt(i)))
        {
            count++;
        }
      }
      return count;
    }
}