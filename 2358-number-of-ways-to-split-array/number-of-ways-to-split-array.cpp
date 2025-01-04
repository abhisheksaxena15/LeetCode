class Solution {
public:
    // int sum(vector<int>& nums){}
    int waysToSplitArray(vector<int>& nums) {

        long total_sum = 0;
        long sum = 0;
        for (int num: nums){
            total_sum += num;
        }

        int count = 0;
        for(int i =0; i < nums.size() - 1;i++){
            sum = sum + nums[i];
            if(sum >= (total_sum - sum)){
                count++;
            }
        }
        return count;

    }
};