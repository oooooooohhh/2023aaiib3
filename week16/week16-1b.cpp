// week16-1b.cpp
// LeetCode 50. Pow(x,n)
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if(n>0){
            for(int i=0; i<n; i++){
                ans *= x;
            }
    }else if(n<0){
        for(int i=0; i<-n; i++){
            ans *= 1/x;
        }
    }
    return ans;
    }
};