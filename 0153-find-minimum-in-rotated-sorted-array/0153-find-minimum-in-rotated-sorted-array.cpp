class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n = nums.size() - 1;
        int l = 0;
        int r = n , res = nums[0];
        
        while ( l <= r){
            
            if ( nums[l] < nums[r] ){
                res = min(res , nums[l]);
                break;
            }
            
            int mid = (l + r)/2;
            res = min(res , nums[mid]);
            
            if ( nums[mid] >= nums[l] ){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return res;
    }
};