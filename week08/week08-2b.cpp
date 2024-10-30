int diagonalSum(int** mat, int matSize, int* matColSize) {
    int ans = 0;
    int N = matSize;
    for(int i=0;i<N;i++){
        ans += mat[i][i]; //左下右上,i正 ,i正
        ans += mat[i][N-1-i]; //左下右上 i正, N-1-i 倒過來的
    }

    if(N%2==1) ans -= mat[N/2][N/2]; //奇數: 那正中間的數用了2次,要扣掉;
    return ans;

}   