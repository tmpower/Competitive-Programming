// http://codeforces.com/problemset/problem/629/A

#include <stdio.h>

#define N 101

int ss[N][N][2];

int main()
{
    int n, i, j;
    char tmp;
    int ans = 0;

    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        scanf("\n");
        for(j=1; j<=n; j++) {
            scanf("%c",&tmp);
            if(tmp == 'C') {
                ss[i][j][0] = ss[i][j-1][0] + 1;
                ss[i][j][1] = ss[i-1][j][1] + 1;
            } else {
                ss[i][j][0] = ss[i][j-1][0];
                ss[i][j][1] = ss[i-1][j][1];
            }
        }
        ans += ((ss[i][n][0]*(ss[i][n][0]-1))/2);
    }

    for(i=1; i<=n; i++) {
        ans += ((ss[n][i][1]*(ss[n][i][1]-1))/2);
    }

    printf("%d\n",ans);

    return 0;
}
