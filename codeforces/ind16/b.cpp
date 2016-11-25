// http://codeforces.com/problemset/problem/653/B

#include <bits/stdc++.h>

using namespace std;

int n, q;
char inp[37][2][2];
long long int ans=0;

void countt(char* a)
{
    int ln = strlen(a);
    if(ln == n) {
        ans++;
        return;
    }

    int j, k;
    char nstr[8];
    for(j=0; j<q; j++) {
        if(a[0] == inp[j][1][0]) {
            nstr[0] = inp[j][0][0];
            nstr[1] = inp[j][0][1];
            for(k=1; k<ln; k++) {
                nstr[k+1] = a[k];
            }
            nstr[ln+1] = '\0';
            countt(nstr);
        }
    }
}

int main()
{
    int i, qq;
    scanf("%d%d",&n,&qq);
    q = 0;
    for(i=0; i<qq; i++) {
        scanf("%s%s",inp[q][0],inp[q][1]);
        if((int(inp[q][0][0]) > 96 && int(inp[q][0][0]) < 103) && (int(inp[q][0][1]) > 96 && int(inp[q][0][1]) < 103) && (int(inp[q][1][0]) > 96 && int(inp[q][1][0]) < 103)) {
            q++;
        }
    }

    countt("a");

    cout<<ans<<endl;

    return 0;
}
