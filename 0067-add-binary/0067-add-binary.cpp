class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        string ans = "";
        while (i >= 0 || j >= 0 || carry) {
            int s1 = (i >= 0) ? a[i] - '0' : 0;
            int s2 = (j >= 0) ? b[j] - '0' : 0;
            int sum = s1 + s2 + carry;

            // Using if-else as per the original approach
            if (sum == 0) {
                carry = 0;
                ans.push_back('0');
            } else if (sum == 1) {
                carry = 0;
                ans.push_back('1');
            } else if (sum == 2) {
                carry = 1;
                ans.push_back('0');
            } else {
                carry = 1;
                ans.push_back('1');
            }

            i--;
            j--;
        }

        // Reverse the answer to get the correct result
        reverse(ans.begin(), ans.end());

        // Remove leading zeros, if any
        int start = 0;
        while (start < ans.size() && ans[start] == '0') {
            start++;
        }

        // If all digits are zero, return "0"
        if (start == ans.size()) {
            return "0";
        }

        // Otherwise, return the substring from the first non-zero character
        return ans.substr(start);
    }
};