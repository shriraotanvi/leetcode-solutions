class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long nn = n;//copy of n
        if(nn<0) nn = -1 * nn; //agar egative value toh positive banao
        while(nn){
            if(nn%2){
                ans = ans * x;
                nn = nn - 1;    //this is when n is odd
            }
            else{
                x = x*x;     //this is when n is even
                nn = nn/2;
            }
        }
        if(n<0) ans = (double)(1.0)/(double)(ans);
        return ans;
    }
};