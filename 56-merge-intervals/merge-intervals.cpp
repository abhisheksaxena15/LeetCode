class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //   [[1,3] [2,5] [4,6] [8 ,10] [15 ,18]]
        int n = intervals.size();
        vector<vector<int>> arr = intervals;
        vector<vector<int>> result;

        sort(arr.begin() , arr.end());

        for ( int i = 0 ; i < n ; i++){

            if(result.empty() || result.back()[1] < arr[i][0] ){
                result.push_back(arr[i]);
            } else{
                result.back()[1] = max( result.back()[1] , arr[i][1]);
            }

            // if (arr[i][1] >= arr[i + 1][1]){
            //     arr[i][1] = max( arr[i][1] , arr[i + 1][1]);
            // }
        }
        return result;
    }
};