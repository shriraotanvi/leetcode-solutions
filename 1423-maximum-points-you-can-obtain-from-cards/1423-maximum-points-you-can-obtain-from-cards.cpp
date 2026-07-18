class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftsum=0;
        int rightsum=0;
        int r=cardPoints.size()-1;
        int maxsum=0;
        for(int i=0; i<k; i++){
            leftsum += cardPoints[i];
            maxsum = leftsum;
        }
        int l = k-1;
        while(l>=0){
            rightsum += cardPoints[r];
            r--;
            leftsum -= cardPoints[l];
            l--;
            maxsum = max(maxsum, leftsum+rightsum);
        }
        return maxsum;
    }
};