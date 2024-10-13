class Solution {
public:
    int maxProduct(vector<int>& nums) {
       
        vector<int> B(nums.rbegin(), nums.rend());
    
   
        for (int i = 1; i < nums.size(); i++) {
       
            if (nums[i - 1] != 0) {
                nums[i] *= nums[i - 1];
            }
        
            if (B[i - 1] != 0) {
                B[i] *= B[i - 1];
            }
        }

        int x = max(*max_element(nums.begin(), nums.end()), *max_element(B.begin(), B.end()));
    
        return x;
    }
};
