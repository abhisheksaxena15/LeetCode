class Solution {
public:
    bool isPalindrome(int n) {
        long long original = n;
        long long reversed = 0;
        
        while (n > 0) {
            int digit = n % 10;
            reversed = reversed * 10 + digit;

            if (reversed > INT_MAX) {
                return false;
            }
            
            n /= 10;
        }
        
        return original == reversed;
    }
};
