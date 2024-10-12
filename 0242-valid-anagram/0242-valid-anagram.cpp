class Solution {
public:
    bool isAnagram(string s, string t) {
        // If the lengths are different, they can't be anagrams.
        if (s.size() != t.size()) {
            return false;
        }

        int arr[26] = {0};

        // Increment the count for characters in 's' and decrement for 't'.
        for (int i = 0; i < s.size(); i++) {
            arr[tolower(s[i]) - 'a']++;
            arr[tolower(t[i]) - 'a']--;
        }

        // If all counts are zero, the strings are anagrams.
        for (int i = 0; i < 26; i++) {
            if (arr[i] != 0) {
                return false;
            }
        }
        
        return true;
    }
};
