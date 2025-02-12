class Solution {
public:
    int sumofdigit(int x) {
        int remainder = 0;
        while (x > 0) {
            int digit = x % 10;
            remainder += digit;
            x /= 10;
        }
        return remainder;
    }
    
    
    int maximumSum(vector<int>& nums) {
    
        unordered_map<int , int> freq;

        int maxsum = -1;
        for ( int i = 0; i < nums.size(); i++){
            int digitsum = sumofdigit(nums[i]);
            if(freq.count(digitsum)){
                maxsum = max(maxsum , freq[digitsum] + nums[i]);
                freq[digitsum] = max(nums[i] , freq[digitsum]);
            }
            else freq[digitsum] = nums[i];
        }
        return maxsum;
    }
};