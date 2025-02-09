class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int, int> freq;
        
        long long result = 0;
        for ( int  i = 0 ; i < nums.size(); i++){

            int key = nums[i] - i;
            result = result + freq[key];
            freq[key]++;
        }
        long totalPairs = static_cast<long long>(nums.size()) * (nums.size() - 1) / 2; // Total pairs (i, j) with i < j
        return totalPairs - result; // Bad pairs = Total pairs - Good pairs

    }
};