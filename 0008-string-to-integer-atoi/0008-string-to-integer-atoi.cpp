class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(i<s.size() && s[i] == ' ') i++;
        s = s.substr(i);
        if(s.empty()) return 0;
        int sign = 1;
        long long ans = 0;
        if(s[0] == '-') 
            sign = -1;
        if(s[0] == '+' || s[0] == '-') 
            i = 1;
        else i = 0;
        while(i<s.size()){
            if(!isdigit(s[i])) break;
            ans = ans * 10 + (s[i] - '0');
            if(sign == 1  && ans>INT_MAX) return INT_MAX;
            if(sign == -1 && -ans<INT_MIN) return INT_MIN;
            i++;
        }
        return (int) (sign * ans);
    }
};