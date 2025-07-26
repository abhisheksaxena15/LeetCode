class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string , vector<string>> map;

        for (string word : strs){
            string x = word;
            sort(x.begin() , x.end());
            map[x].push_back(word);
        }

        for( auto& [key , value] : map){
            ans.push_back(value);
        }
        return ans;
    }
};