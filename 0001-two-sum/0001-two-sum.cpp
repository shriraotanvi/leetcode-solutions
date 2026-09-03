class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        for(int i=0; i<nums.size(); i++){
            int a = nums[i];
            int newTarget = target - a;
            if(mpp.find(newTarget) != mpp.end()){
                return {mpp[newTarget], i};
            }
            mpp[a] = i;
        }
        return {-1, -1};
    }
};