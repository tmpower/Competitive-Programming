// http://codeforces.com/problemset/problem/629/B

#include <stdio.h>

#define N 5001

int main()
{
    int n, i, j;
    int ml[N][2];
    int fm[N][2];
    char gend, t1, t2, t3;

    scanf("%d%c",&n,&t1);

    int nm, nf;
    nm = nf = 0;
    for(i=0; i<n; i++) {
        scanf("%c%c",&gend,&t1);
        if(gend == 'F') {
            scanf("%d%c%d%c",&fm[nf][0], &t2, &fm[nf][1], &t3);
            nf++;
        } else {
            scanf("%d%c%d%c",&ml[nm][0], &t2, &ml[nm][1], &t3);
            nm++;
        }
    }

    int ans=0;
    int matm, matf;
    for(i=1; i<=366; i++) {
        matm = matf = 0;

        for(j=0; j<nf; j++) {
            if(fm[j][0] <= i && fm[j][1] >= i) matf++;
        }
        for(j=0; j<nm; j++) {
            if(ml[j][0] <= i && ml[j][1] >= i) matm++;
        }

        if(matm < matf) matf = matm;

        if(matf > ans) ans = matf;
    }

    printf("%d\n",2*ans);

    return 0;
}
