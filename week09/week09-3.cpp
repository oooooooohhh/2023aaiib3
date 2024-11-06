class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double total = 0;
        for(int i=1; i<salary.size()-1;i++){
            //避開 最校salary[0] 最大salary[N-1];
            total += salary[i];
        
        }
        return total/(salary.size()-2); //平均,就是除法
    }
};