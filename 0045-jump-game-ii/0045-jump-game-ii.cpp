class Solution {
public:
    int jump(vector<int>& nums) {
        int left = 0;
        int right =0;
        int jumps = 0;
        while(right<nums.size()-1){
            int last = 0;
            for(int i=left; i<=right; i++){
                last = max(last, i + nums[i]);
            }
            left = right + 1;
            right = last;
            jumps = jumps + 1;
        }
        return jumps;
    }
};