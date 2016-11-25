// http://codeforces.com/problemset/problem/496/A

#include <stdio.h>

int main()
{
    int n, i, j;
    int maxx, minn;
    int a[101];

    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    minn = 1000001;
    for(i=1; i<n-1; i++) {
        maxx = 0;
        for(j=1; j<n-1; j++) {
            if(i == j) {
                if(maxx < a[j+1] - a[j-1])
                    maxx = a[j+1] - a[j-1];
            } else {
                if(maxx < a[j+1] - a[j])
                    maxx = a[j+1] - a[j];
                if(maxx < a[j] - a[j-1])
                    maxx = a[j] - a[j-1];
            }
        }
        if(minn > maxx)
            minn = maxx;
    }

    printf("%d\n",minn);
    return 0;
}
