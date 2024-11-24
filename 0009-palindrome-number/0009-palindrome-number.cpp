class Solution {
public:
    bool isPalindrome(int n) {
        long long original = n;  // Store the original number
        long long reversed = 0;  // This will store the reversed number
        
        // Reverse the number
        while (n > 0) {
            int digit = n % 10;   // Get the last digit
            reversed = reversed * 10 + digit;  // Build the reversed number
            if(reversed > INT_MAX){
                return false;
            }
            n /= 10;  // Remove the last digit
        }
        
        // Check if the original number is the same as the reversed one
        return original == reversed;
    }
};