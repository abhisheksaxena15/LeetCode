class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int n = nums.size();
        if( n < 3) return false;
        
        int nums3 = INT_MIN;
        vector<int> s;
        
        for(int i = n - 1 ; i >=0 ; i--){
            if( nums[i] < nums3){
                return true;
            }
            else {
                while((!s.empty()) && (s.back() < nums[i])){
                    nums3 = s.back();
                    s.pop_back();
                }
                s.push_back(nums[i]);
                
            }
        }
        return false;
        
    }
};