// http://codeforces.com/problemset/problem/567/B

#include <bits/stdc++.h>

#define N 1000001

int libr[N];

int main()
{
    int n, i, t1;
    int qr[101];
    char t2, t3, t4;

    scanf("%d",&n);
    for(i=0; i<n; i++) {
        scanf("%c%c%c%d",&t3,&t2,&t4,&t1);
        if(t2 == '+')
            qr[i] = t1;
        else
            qr[i] = -1*t1;
    }

    int bos=0, mxx=0;
    memset(libr,0,N);
    for(i=0; i<n; i++) {
        if(qr[i] > 0) {
            libr[qr[i]] = 1;
            if(bos == 0) mxx++;
            else bos--;
        } else {
            if(libr[-1*qr[i]] == 1) {
                bos++;
                libr[-1*qr[i]] = 0;
            } else {
                bos++;
                mxx++;
            }
        }
    }

    printf("%d\n",mxx);

    return 0;
}
