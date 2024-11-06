class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low)/2;  //這個方法是錯
        if(low%2==1 || high%2==1) ans++; //頭尾都是奇數就要+1
        //不知道為甚麼 交給大家想想看
        return ans; 
    
    
    
    }
};