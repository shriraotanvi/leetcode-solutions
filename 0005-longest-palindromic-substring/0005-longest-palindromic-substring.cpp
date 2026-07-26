class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() <=1) return s;
        string ans;
        for(int i=0; i<s.size(); i++){
            int l=i;
            int r=i;
            while(l>=0 && r<s.size() && s[l] == s[r]){
                l--;
                r++;
            }
            string curr;
            for(int i=l+1; i<r; i++){
                curr.push_back(s[i]);
            }
            if(curr.size() > ans.size()) ans = curr;
            l=i;
            r=i+1;
            while(l>=0 && r<s.size() && s[l] == s[r]){
                l--;
                r++;
            }
            curr="";
            for(int i=l+1; i<r; i++){
                curr.push_back(s[i]);
            }
            if(curr.size() > ans.size()) ans = curr;
        }
        return ans;
    }
};