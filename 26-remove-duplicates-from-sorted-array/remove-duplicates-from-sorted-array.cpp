class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> freq;  // Use a map to handle negative numbers
        
        // Count the frequency of each number
        for (int num : nums) {
            freq[num]++;
        }
        
        
        vector<int> uniqueNums;
        for (auto& [key, value] : freq) {
            uniqueNums.push_back(key);  
        }
        
        sort(uniqueNums.begin() , uniqueNums.end());
        nums = uniqueNums;
        
        // Return the size of the unique array
        return nums.size();
    }
};
