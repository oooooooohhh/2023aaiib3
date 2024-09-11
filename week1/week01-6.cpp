class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0;
        while(start>0){
           cout << start%2;
           start/= 2;
        }
        return ans;

    }
};



class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0; //回區前面 ans=0
        while(start>0 || goal>0){ //只要還活著,就剝皮
            if(start%2 != goal%2) ans++; //一言不合就++
            start/= 2; //剝皮
            goal/=2; //波鼻
        }
        return ans;

    }
};
