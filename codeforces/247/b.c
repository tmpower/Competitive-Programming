// http://codeforces.com/problemset/problem/431/B

#include<stdio.h>

int main()
{
    int g[6][6], mx;
    int i1,i2,i3,i4,i5;
    int bk[6] = {0,0,0,0,0,0};

    for(i1=1; i1<6; i1++)
    for(i2=1; i2<6; i2++)
        scanf("%d",&g[i1][i2]);

    mx = 0;
    for(i1=1; i1<6; i1++) {
        bk[i1] = 1;
        for(i2=1; i2<6; i2++) {
            if(bk[i2]) continue;
            bk[i2] = 1;
            for(i3=1; i3<6; i3++) {
                if(bk[i3]) continue;
                bk[i3] = 1;
                for(i4=1; i4<6; i4++) {
                    if(bk[i4]) continue;
                    bk[i4] = 1;
                    for(i5=1; i5<6; i5++) {
                        if(bk[i5]) continue;
                        if(mx < (g[i1][i2]+g[i2][i1]+g[i3][i4]+g[i4][i3])+(g[i2][i3]+g[i3][i2]+g[i4][i5]+g[i5][i4])+(g[i4][i3]+g[i3][i4])+(g[i4][i5]+g[i5][i4]))
                            mx = (g[i1][i2]+g[i2][i1]+g[i3][i4]+g[i4][i3])+(g[i2][i3]+g[i3][i2]+g[i4][i5]+g[i5][i4])+(g[i4][i3]+g[i3][i4])+(g[i4][i5]+g[i5][i4]);
                    }
                    bk[i4] = 0;
                }
                bk[i3] = 0;
            }
            bk[i2] = 0;
        }
        bk[i1] = 0;
    }
    printf("%d\n",mx);
    return 0;
}
