int main() {
    int a, b;
    vector<int> A, B;
    while( cin >> a >> b ){
        A.push_back(a);//把數字a丟入陣列A
        B.push_back(b);//把數字b丟入陣列B
    }
    sort( A.begin(), A.end() );
    sort( B.begin(), B.end() );
    
    int ans=0;
    for(int i=0; i<A.size(); i++){
        //cout << A[i] << " ";
        ans += abs(A[i] - B[i]);
        
        
    }
    cout << "加起來的答案是"　<< ans;
}