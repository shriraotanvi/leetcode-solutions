class Solution {
public:
    long long perhour(vector<int>& piles, int hourly){
        long long totalhrs=0;
        for(int i=0; i<piles.size(); i++){
            totalhrs += (piles[i] + hourly - 1) / hourly;
        }
        return totalhrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(), piles.end());
        int ans=INT_MAX;
        while(low<=high){
            int mid = low+(high-low)/2;
            long long totalhrs = perhour(piles, mid);
            if(totalhrs <= h){
                ans = mid;
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};