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
        int ans = 0; //�^�ϫe�� ans=0
        while(start>0 || goal>0){ //�u�n�٬���,�N���
            if(start%2 != goal%2) ans++; //�@�����X�N++
            start/= 2; //���
            goal/=2; //�i��
        }
        return ans;

    }
};
