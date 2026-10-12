class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());

        unordered_map<int, int> mpp;
        int rank = 1;
        for(int i=0; i<sorted.size(); i++){
            if(mpp.find(sorted[i]) == mpp.end()){
                mpp[sorted[i]] = rank++;
            }
        }

        for(int i=0; i<arr.size(); i++){
            arr[i] = mpp[arr[i]];
        }
        return arr;
    }
};