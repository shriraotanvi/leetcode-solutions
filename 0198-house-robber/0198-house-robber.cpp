class Solution {
public:
    int robb(vector<int>& nums, int ind, vector<int> &dp){
        if(ind == 0) return nums[ind];
        if(ind < 0) return 0;
        if(dp[ind] != -1){
            return dp[ind];
        }
        int pick = nums[ind] + robb(nums, ind-2, dp);
        int nonpick = 0 + robb(nums, ind - 1, dp);
        return dp[ind] = max(nonpick, pick);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        int ans = robb(nums, nums.size()-1, dp);
        return ans;
    }
};