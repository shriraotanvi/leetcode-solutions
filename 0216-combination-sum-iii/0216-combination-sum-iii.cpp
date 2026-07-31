class Solution {
public:
    void sol(int sum, int last, int k, vector<int>& nums, vector<vector<int>>& ans){
        if(sum == 0 && nums.size()==k){
            ans.push_back(nums);
            return;
        }
        if(sum<=0 && k<nums.size()) return;
        for(int i=last; i<=9; i++){
            if(i<=sum){
                nums.push_back(i);
                sol(sum-i, i+1, k, nums, ans);
                nums.pop_back();
            }
            else{
                break;
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> nums;
        sol(n, 1, k, nums, ans);
        return ans;
    }
};