class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int , int> map;
        int x1 = -1;
        for(int i = 0; i<nums.size() ; i++){
            map[nums[i]]++;
        }
        for(auto& [key, value] : map){
            if(value==2){
                x1 = key;
            }
        }
        int n = nums.size();
        int x = (n*(n + 1))/2;

        int sum = 0;
        for(int i = 0 ;i < nums.size(); i++){
            sum = sum + nums[i]; 
        }
        int total = x - sum + x1;

        return {x1 , total};
    }
};