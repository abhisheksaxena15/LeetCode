class Solution {
public:
    int findNumbers(vector<int>& nums){
        int count = 0;
        for( int i = 0 ; i < nums.size() ; i++){ 
            int num = nums[i];
            int digit = 0;
            while(num != 0){
                num = num / 10;
                digit++;
            }
            if( digit % 2 == 0){
                count++;
            }
        }
        return count;
    }
    // int findNumbers(vector<int>& nums) {
    //     vector<int> ans;
    //     int count = 0;
    //     for( int i = 0 ; i < nums.size() ; i++){
            
    //         int num = nums[i];
    //         while(num != 0){
    //             int digit = num % 10;
    //             ans.push_back(digit);
    //             num /= 10;
    //         }
    //         if(ans.size() % 2 == 0) {
    //             count++;
    //         }

    //     }return count;
    // }
};