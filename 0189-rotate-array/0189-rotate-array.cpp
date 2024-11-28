class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> newarray( nums.size());
        
        for( int i = 0 ; i< nums.size() ; i++){
            newarray[ ( i + k ) % nums.size() ] = nums[i];
        }
        
        nums = newarray;
        
    }
};