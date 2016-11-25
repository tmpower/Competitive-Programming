// http://codeforces.com/problemset/problem/489/B

#include <bits/stdc++.h>
#define max3(a,b,c) (a>b&&a>c?a : b>c?b : c)

using namespace std;

int main()
{
    int n, m;
    int i, j, tt;
    vector<int> a1, b1;

    scanf("%d",&n);
    a1.push_back(0);
    for(i=1; i<=n; i++) {
        scanf("%d",&tt);
        a1.push_back(tt);
    }

    scanf("%d",&m);
    b1.push_back(0);
    for(i=1; i<=m; i++) {
        scanf("%d",&tt);
        b1.push_back(tt);
    }

    sort(a1.begin(), a1.end());
    sort(b1.begin(), b1.end());

    int *dp[2];
    dp[0] = (int*) malloc((m+1)*sizeof(int));
    dp[1] = (int*) malloc((m+1)*sizeof(int));
    for(i=0; i<=m; i++) dp[0][i] = dp[1][i] = 0; //memset

    int turn = 1, prev;
    int a2, b2, c2;

    for(i=1; i<=n; i++) {
        dp[turn][0] = 0;
        prev = (turn+1)%2;
        for(j=1; j<=m; j++) {
            a2 = dp[prev][j-1];
            b2 = dp[prev][j];
            c2 = dp[turn][j-1];
            if(abs(b1[j] - a1[i]) < 2) a2++;
            dp[turn][j] = max3(a2,b2,c2);
        }/*
        for(j=1; j<=m; j++)
            printf("%d ",dp[turn][j]);
        printf("\n");*/
        turn = prev;
    } turn = (turn+1)%2;

    printf("%d\n",dp[turn][m]);

    free(dp[0]);
    free(dp[1]);
    return 0;
}
