// http://codeforces.com/problemset/problem/513/B1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n, m;
int maxs, maxn;
int used[10], org[10], a[10];

void permut(int ind)
{
    int i, j;
    if(ind == n) {
        int minn, sum = 0;
        for(i=0; i<n; i++) {
            minn = org[i];
            for(j=i; j<n; j++) {
                if(org[j] < minn) minn = org[j];
                sum+=minn;
            }
        }
        if(sum > maxs) {
            maxs = sum;
            maxn = 1;
            if(maxn == m) {
                for(i=0; i<n; i++)
                    a[i] = org[i];
            }
        } else
        if(sum == maxs) {
            maxn++;
            if(maxn == m) {
                for(i=0; i<n; i++)
                    a[i] = org[i];
            }
        }

        return;
    }
    for(i=1; i<=n; i++)
        if(!used[i]) {
            used[i] = 1;
            org[ind] = i;
            permut(ind+1);
            used[i] = 0;
        }
    return;
}

int main()
{
    int i;

    scanf("%d%d",&n,&m);

    memset(used,0,10);
    memset(org,0,10);
    memset(a,0,10);
    maxs = 0;
    maxn = 0;
    permut(0);

    for(i=0; i<n-1; i++)
        printf("%d ",a[i]);
    printf("%d\n",a[n-1]);

    return 0;
}
