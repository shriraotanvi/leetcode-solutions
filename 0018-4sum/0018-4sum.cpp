class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if (nums.empty())
            return res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int left = j+1;
                int right = nums.size() - 1;
                 long long newtarget = (long long)target - nums[i] - nums[j];
                while (left < right) {
                    long long twosum = (long long)nums[left] + nums[right];
                    if (twosum > newtarget) {
                        right--;
                    } else if (twosum < newtarget) {
                        left++;
                    } else {
                        vector<int> ans(4, 0);
                        ans[0] = nums[i];
                        ans[1] = nums[j];
                        ans[2] = nums[left];
                        ans[3] = nums[right];
                        res.push_back(ans);

                        while (left < right && nums[left] == ans[2])
                            ++left;
                        while (left < right && nums[right] == ans[3])
                            --right;
                    }
                }
                while (j + 1 < nums.size() && nums[j + 1] == nums[j])
                    ++j;
            }
            while (i < nums.size()-1 && nums[i + 1] == nums[i])
                ++i;
        }
        return res;
    }
};