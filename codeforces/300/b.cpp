// http://codeforces.com/problemset/problem/538/B

#include <bits/stdc++.h>

using namespace std;

int quasi[(2<<6)+1], ind;

void calc1(int bsm, int nm, int carp)
{
    if(bsm == -1) {
        quasi[ind++] = nm;
        return;
    }
    calc1(bsm-1, nm, carp/10);
    calc1(bsm-1, nm+carp, carp/10);
}

int main()
{
    int n;
    int *dp, *par;
    scanf("%d",&n);
    dp = (int*) malloc((n+1)*sizeof(int));
    par = (int*) malloc((n+1)*sizeof(int));

    //precalculate quasi nums
    ind = 0;
    calc1(6, 0, 1000000);

    //dp
    int i, j;
    dp[0] = 0;
    par[0] = -1;
    for(i=1; i<=n; i++) {
        dp[i] = i;
        par[i] = 1;
        for(j=1; j<ind; j++) {
            if(quasi[j] > i) break;
            if(dp[i] > dp[i-quasi[j]]+1) {
                dp[i] = dp[i-quasi[j]]+1;
                par[i] = quasi[j];
            }
        }
    }
    printf("%d\n",dp[n]);
    i = n;
    while(1) {
        printf("%d", par[i]);
        i = i - par[i];
        if(i == 0) break;
        else printf(" ");
    }
    printf("\n");

    free(dp);
    free(par);
    return 0;
}
