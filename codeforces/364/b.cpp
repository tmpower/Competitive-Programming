// http://codeforces.com/problemset/problem/701/B

#include <bits/stdc++.h>

#define N 100001

using namespace std;

typedef unsigned long long int ull;

int main()
{
    ull n, m;
    ull urc, ucc;
    ull ri, ci, i;
    bool rowt[N], colt[N];

    cin>>n>>m;

    urc = 0; ucc = 0;
    memset(rowt, 0, n+1);
    memset(colt, 0, n+1);

    for(i=0; i<m; i++) {
        cin>>ri>>ci;

        if(rowt[ri] == 0) {
            urc++;
            rowt[ri] = 1;
        }
        if(colt[ci] == 0) {
            ucc++;
            colt[ci] = 1;
        }

        cout<<(n-urc)*(n-ucc)<<endl;
    }

    return 0;
}
