class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }

        vector<pair<int, int>> mp_vec(map.begin(), map.end());
        sort(mp_vec.begin(), mp_vec.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 return a.second > b.second;
             });
        
        vector<int> ans;
        int i = 0;
        for (auto& [key, value] : mp_vec) {
            if (i == k)
                break;
            ans.push_back(key);
            i++;
        }
        return ans;

        // for(int i = 0 ; i  < map.size(); )
    }
};