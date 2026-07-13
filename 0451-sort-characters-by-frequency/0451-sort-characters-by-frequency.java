import java.util.HashMap;
import java.util.Map;
import java.util.ArrayList;

class Solution {
    public String frequencySort(String s) {
        Map<Character, Integer> map = new HashMap<>();
        
        for (char c : s.toCharArray()) {
            if (map.containsKey(c)) {
                map.put(c, map.getOrDefault(c, 0) + 1);
            } else {
                map.put(c, 1);
            }
        }
        
        // FIX 1: Initialized as an empty string instead of " " to remove the stray space
        String ans = ""; 
        
        while (!map.isEmpty()) {
            char maxChar = ' ';
            int max = 0;
            ArrayList<Character> list = new ArrayList<>(map.keySet());
            
            for (int i = 0; i < list.size(); i++) {
                char c = list.get(i);
                if (map.get(c) > max) {
                    max = map.get(c);
                    maxChar = c; // FIX 2: Added this missing step to update the character
                }
            }
            
            for (int i = 0; i < max; i++) {
                ans = ans + maxChar;
            }
            map.remove(maxChar);
        }
        
        return ans;
    }
}