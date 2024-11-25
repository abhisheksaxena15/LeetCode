class Solution {
public:
    int majorityElement(vector<int>& nums) {

        for ( int i= 0; i< nums.size(); i++){
            int count = 0;
            for( int j = 0; j< nums.size( ); j++){
                if( nums[i] == nums[j]){
                    count++;
                }
            }
            if( count > nums.size()/2){
                return nums[i];
            }
        }
        return -1;
    }   
};

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size() -1 ;
        
        
        
//         vector<int> arr(1000 , 0);
//         for ( int i =0 ; i <= n ; i ++){
//             arr[nums[i]]++;
//         }
//         for ( int i = 0 ; i< arr.size() ; i++){
//             if(arr[i] > n/2){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };