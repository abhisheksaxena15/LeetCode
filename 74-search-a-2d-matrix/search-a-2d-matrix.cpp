class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        //[[1,3,5,7],[10,11,16,20],[23,30,34,60]]
        int start = 0; // [[1]]
        int end = row * col - 1; // [[60]]

        while(start <= end){
            int mid = start + (end - start)/2;
            
            int element = matrix[mid/col][mid%col];
            if(element == target){
                return 1;
            }
            
            if( element < target ){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return 0;
    }
};