class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        for(int i=0; i<s.size(); i++){
            vector<int> freq(26, 0);
            for(int j=i; j<s.size(); j++){
                freq[s[j] - 'a']++;
                int maxi = 0;
                int mini = INT_MAX;
                for(int i : freq){
                    if(i == 0) continue;
                    maxi = max(maxi, i);
                    mini = min(mini, i);
                }
                ans += maxi - mini;
            }
        }
        return ans;
    }
};