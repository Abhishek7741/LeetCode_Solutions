class Solution {
public:
    vector<int> generateRow(int row) {
        long long ans = 1;
        vector<int> Rowstore;
        Rowstore.push_back(1);
        for (int i = 1; i < row; i++) {
            ans = ans * (row - i);
            ans = ans / i;
            Rowstore.push_back(ans);
        }
        return Rowstore ;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> finalans;
        for (int i = 1; i <= numRows; i++) {
            finalans.push_back(generateRow(i));
        }
         return finalans ;
    }
   
};