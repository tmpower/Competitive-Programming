int nonDivisibleSubset(int k, vector<int> S) {
    int N = S.size();
    int ans;
    
    vector<int> ksums(k, 0);
    for(int i=0; i<N; i++) {
        ksums[S[i]%k]++;
    }
    
    if(k == 1) {
        ans = 1;
    } else {
        ans = (ksums[0] > 0 ? 1:0);
        for(int i=1; i<=(k-1)/2; i++) {
            if(ksums[i]+ksums[k-i] > 0) {
                ans += (ksums[i] > ksums[k-i] ? ksums[i] : ksums[k-i]);
            }
        }
        if(!(k&1) && ksums[k/2] > 0) { // even number
            ans++;
        }
    }
    
    return ans;
}
