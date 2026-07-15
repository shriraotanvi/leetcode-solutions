class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count = 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int left = 0;
        int right = 0;
        while(left<g.size() && right<s.size()){
            if(s[right] >= g[left]){
                count+=1;
                left++;
                right++;
            }
            else{
                right++;
            }
        }
        return count;
    }
};