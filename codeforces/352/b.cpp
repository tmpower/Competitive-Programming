// http://codeforces.com/problemset/problem/672/B

#include <bits/stdc++.h>

int main()
{
    int n;
    char str[100001];

    int dis[27];
    int i, ndis;

    scanf("%d", &n);
    scanf("%s", str);

    if(n > 26) {
        printf("-1");
    } else {

        ndis = 0;
        for(i=0; i<26; i++) dis[i] = 0;
        for(i=0; i<n; i++) dis[str[i]-'a'] = 1;
        for(i=0; i<26; i++)
            if(dis[i]) ndis++;

        printf("%d", n-ndis);
    }

    return 0;
}
