// http://codeforces.com/problemset/problem/339/B

# include <stdio.h>

int main()
{
    int n, m;
    int a[100000];
    int t, i, rm;


    scanf("%d%d",&n,&m);

    scanf("%d",&a[0]);
    rm = 1;
    for(i=1; i<m; i++) {
        scanf("%d",&t);
        if(t != a[rm-1]) {
            a[rm] = t;
            rm++;
        }
    }

    long long sum=a[0]-1;
    for(i=0; i<rm-1; i++) {
        if(a[i]<a[i+1]) {
            sum+=(a[i+1]-a[i]);
        } else {
            sum+=(n-a[i]);
            sum+=(a[i+1]);
        }
    }
    printf("%I64d\n",sum);

    return 0;
}
