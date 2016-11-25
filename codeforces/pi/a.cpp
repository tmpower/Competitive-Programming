// http://codeforces.com/problemset/problem/567/A

# include <bits/stdc++.h>

int main()
{
    int n, i;
    int a[100001];

    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    int mn, mx;
    for(i=0; i<n; i++) {

        if(i == 0) {
            printf("%d %d\n", abs(a[1]-a[0]), abs(a[n-1]-a[0]));
        } else
        if(i == n-1) {
            printf("%d %d\n", abs(a[n-1]-a[n-2]), abs(a[n-1]-a[0]));
        } else {
            mn = abs(a[i-1] - a[i]);
            if(abs(a[i+1] - a[i]) < mn) mn = abs(a[i+1] - a[i]);
            mx = abs(a[n-1] - a[i]);
            if(abs(a[0] - a[i]) > mx) mx = abs(a[0] - a[i]);
            printf("%d %d\n", mn, mx);
        }
    }

    return 0;
}
