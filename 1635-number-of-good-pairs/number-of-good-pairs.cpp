class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int , int> map;
        for(int i = 0;i < nums.size(); i++){
            map[nums[i]]++;
        }
        int result = 0;
        for(auto& [key , value] : map){
            result += (value * (value-1))/2;
        }
        return result;
    }
};
/*
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        for(int i = 0;i <= nums.size(); i++){
            for(int j = i+1; j<=nums.size()-1; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
        }return count;
    }
};
*/