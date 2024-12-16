class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        for(int i = 0; i < k; i++){
            int min = INT_MAX;
            int idx;
            for(int j = 0; j < nums.size(); j++){
                if(min > nums[j]){
                    min = nums[j];
                    idx = j;
                }
            }
            nums[idx] = nums[idx] * multiplier;
        }
        return nums;
    }
};
