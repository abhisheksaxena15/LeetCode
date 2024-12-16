class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        int srow = 0 , erow = m - 1;
        int scol = 0 , ecol = n - 1;
        
        vector<int> ans;
        while((srow <= erow) &&(scol <= ecol)){
            //top
            for (int i = scol ; i <= ecol ; i++){
                ans.push_back(matrix[srow][i]);
            }
            
            //right
            for(int i = srow + 1 ; i <= erow ; i++){
                ans.push_back(matrix[i][ecol]);
            }
            
            //bottom
            for( int j = ecol - 1; j >= scol; j--){
                if(srow == erow) break;
                ans.push_back(matrix[erow][j]);
            }
            
            //left
            for(int j = erow - 1; j > srow ; j--){
                if(scol == ecol) break;
                ans.push_back(matrix[j][scol]);
            }
            
            srow++;
            ecol--;
            erow--;
            scol++;
        }
        return ans;
    }
};