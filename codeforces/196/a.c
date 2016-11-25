// http://codeforces.com/problemset/problem/337/A

# include <stdio.h>

main()
{
    int n, m;
    int a[51];
    int i, j;

    scanf("%d%d",&n,&m);
    for(i=0; i<m; i++)
        scanf("%d",&a[i]);

    int tmp;
    for(i=0; i<m; i++)
    for(j=i+1; j<m; j++)
        if(a[i] > a[j]){
            tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }

    int ans = 100001;
    for(i=0; i<m; i++)
        for(j=i+n-1; j<m; j++)
            if(ans > a[j]-a[i])
                ans = a[j]-a[i];
    printf("%d\n",ans);
}
