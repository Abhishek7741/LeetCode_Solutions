class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curtsum = 0;
        int maxi = INT_MIN;
        for (int i = 0 ; i < nums.size(); i++) {
            curtsum += nums[i];
            if (curtsum > maxi) {
                maxi = curtsum;
            }
            if (curtsum < 0) {
                curtsum = 0;
            }
        }
        return maxi ;
    }
};