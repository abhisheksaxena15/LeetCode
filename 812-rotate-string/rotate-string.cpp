class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        string re = s;
        for (int i = 0; i < s.size(); i++) {
            // rotate left by 1 character
            char first = re[0];
            for (int j = 0; j < s.size() - 1; j++) {
                re[j] = re[j + 1];
            }
            re[s.size() - 1] = first;
            if (re == goal) return true;
        }
        return false;
    }
};
