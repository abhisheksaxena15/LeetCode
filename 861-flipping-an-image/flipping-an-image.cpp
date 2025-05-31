class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        int n = image.size();
        for(int i = 0; i < n; i++){
            reverse(image[i].begin() , image[i].end());
        }
        for( int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                image[i][j] = image[i][j] ^ 1;
            }
        }
        return image;
    }
};

/*
def flipAndInvertImage(image):
    for row in image:
        # Step 1: Reverse the row
        row.reverse()

        # Step 2: Invert each value
        for i in range(len(row)):
            row[i] = 1 - row[i]  # 1 becomes 0, 0 becomes 1

    return image

*/