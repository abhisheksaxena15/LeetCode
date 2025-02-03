class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int increase = 1; 
        int decrease = 1;
        int maxlength = 1;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] > nums[i-1]){
                increase = increase + 1;
                decrease = 1;
            }
            else if (nums[i] < nums[i - 1]){
                decrease = decrease + 1;
                increase = 1;
            }
            else {
                increase = 1; 
                decrease = 1;
            }

            maxlength = max(maxlength , max(increase , decrease));
        }

        return maxlength;
    }
};