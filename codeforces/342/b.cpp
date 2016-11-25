// http://codeforces.com/problemset/problem/625/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int la, lb, i, j, ti;
    char a[100001], b[31];

    scanf("%s",a);
    scanf("%s",b);

    la = strlen(a);
    lb = strlen(b);

    int ans = 0, match;
    for(i=0; i<la; i++) {
        match = 1;
        ti = i;
        for(j=0; j<lb; j++) {
            if(a[ti] != b[j]) {
                match = 0;
                break;
            }
            ti++;
        }
        if(match == 1) {
            //printf("%d\n",ti);
            i = ti-1;
        }
        ans+=match;
    }

    printf("%d\n",ans);
    return 0;
}
