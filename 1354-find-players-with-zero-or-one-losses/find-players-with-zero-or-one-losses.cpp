class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int , int> lost_table;
        

        for( int i = 0 ; i < matches.size() ; i++){
            lost_table[matches[i][1]]++;
        }
        vector<int> not_lost;
        vector<int> one_lost;

        for(int i = 0 ; i < matches.size() ; i++){
            int winner = matches[i][0];
            int looser = matches[i][1];
            if(lost_table.count(winner) == 0){
                not_lost.push_back(winner);
                lost_table[winner] = 2;
            }
            if(lost_table[looser] == 1){
                one_lost.push_back(looser);
            }
        }
        sort(not_lost.begin() , not_lost.end());
        sort(one_lost.begin() , one_lost.end());
        return{not_lost,one_lost};
    }
};