class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // solve this question first transpose the matrix and then reverse it . 
        // transpose it 
        int n = matrix.size();
        for(int i = 0 ; i <n-1; i++){
            for(int j = i +1 ; j<n ; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        // reverse it 
        for(int i = 0 ; i<n ; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};