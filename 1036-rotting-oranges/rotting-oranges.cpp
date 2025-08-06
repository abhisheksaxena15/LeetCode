class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        queue<pair<int, int>> que;
        vector<vector<int>> direction = {{0,1} , {1,0} , {0,-1} , {-1,0}};
        
        int n = grid.size();
        int m = grid[0].size();
        int minute =0;

        int freshcount = 0;

        for(int i = 0 ; i < n ; i ++){
            for ( int j = 0 ; j < m ; j++){

                if( grid[i][j] == 2){
                    que.push({i , j});
                }
                else if( grid[i][j] == 1){
                    freshcount++;
                }
            }
        }

        if (freshcount == 0) return 0;

        while ( !que.empty() ){

            int count = que.size();
            bool fresh = false;

            while ( count-- ){

                int i = que.front().first;
                int j = que.front().second;
                que.pop();

                for( auto &director : direction){

                    int new_i = i + director[0];
                    int new_j = j + director[1];

                    if(new_i >= 0  && new_i < n && new_j >= 0 && new_j < m  && grid[new_i][new_j] == 1){

                        grid[new_i][new_j] = 2;
                        que.push({new_i, new_j});
                        freshcount--;
                        fresh = true;

                    }
                }
            }
            if(fresh) minute++;
        }
        return  (freshcount == 0) ? minute : -1;
    }
};