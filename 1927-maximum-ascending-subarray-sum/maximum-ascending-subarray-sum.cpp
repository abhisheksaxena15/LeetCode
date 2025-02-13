class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

        int increase = 1;
        int maxsum = 0;

        int sum = nums[0];
        for( int i = 1; i < nums.size(); i++){
            if( nums[i] > nums[i  - 1]){
                sum = sum + nums[i];
            }
            else {
                maxsum = max(sum , maxsum);
                sum = nums[i];
            }
        }
        return max(maxsum , sum);
    }
};