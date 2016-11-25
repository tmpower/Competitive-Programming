// http://codeforces.com/problemset/problem/327/A

# include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, ans;
    int *a, *sm;

    scanf("%d",&n);

    a = (int*) malloc(n*sizeof(int));
    sm = (int*) malloc(n*sizeof(int));
    for(i=0; i<n; i++)
        scanf("%d",a+i);

    sm[0] = a[0];
    for(i=1; i<n; i++)
        sm[i] = sm[i-1] + a[i];

    ans = 0;
    int bfr, aft, mid0;
    for(i=0; i<n; i++) {
        if(i==0) bfr = 0;
        else bfr = sm[i-1];
        for(j=i; j<n; j++) {
            aft = sm[n-1] - sm[j];
            if(i==0) mid0 = (j-i+1) - sm[j];
            else mid0 = (j-i+1) - (sm[j]-sm[i-1]);
            if(ans < bfr + mid0 + aft)
                ans = bfr + mid0 + aft;
        }
    }

    printf("%d\n", ans);
    free(a);
    free(sm);
    return 0;
}
