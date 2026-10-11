class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int num = rowIndex+1;
        long long  ans = 1 ;
        vector<int>row ;
        row.push_back(1);
        for(int i = 1 ; i<num ; i++){
            ans = ans*(num-i);
            ans = ans/i;
         row.push_back(ans);   
        }
        return row ;
    }
};