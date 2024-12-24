class Solution {
public:
    int rev(int nums){
        int remainder = 0; 
        while(nums != 0){
            int d =nums % 10;
            remainder = remainder * 10 + d;
            nums /= 10;
        }
        return remainder;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int , int> map;
        
        
        for(int i = 0; i<nums.size(); i++){
            nums[i] = nums[i] - rev(nums[i]);
        }
        
        int M = 1e9 + 7;
        
        int result = 0;
        for(int i = 0; i < nums.size(); i++){
            result = (result + map[nums[i]]) % M;
            map[nums[i]]++;
        }
        return result;
        
    }
};