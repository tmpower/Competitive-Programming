// http://codeforces.com/problemset/problem/701/A

#include <stdio.h>

int main()
{
    int n, i, j;
    int a[101], sum, dest, taken[101];

    scanf("%d", &n);
    sum = 0;
    for(i=1; i<=n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
        taken[i] = 0;
    }

    dest = 2*sum/n;

    for(i=1; i<=n; i++) {
        if(taken[i]==0) {
            for(j=i+1; j<=n; j++) {
                if(taken[j] == 0 && a[i]+a[j] == dest) {
                    taken[j] = 1;
                    printf("%d %d\n", i, j);
                    break;
                }
            }
        }
    }

    return 0;
}
