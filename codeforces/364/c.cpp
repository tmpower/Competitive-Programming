// http://codeforces.com/problemset/problem/701/C

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define N 100001

int psn(char a)
{
    int j;
    j = a - 65;
    if(!isupper(a)) j-=6;
    return j;
}

int main()
{
    int n;
    char apr[N];
    int tkn[54];
    int npk, i, j, ans, cf;

    scanf("%d", &n);
    scanf("%s", apr);

    npk = 0;
    for(i=0; i<54; i++) tkn[i] = 0;
    for(i=0; i<n; i++) {
        if(tkn[psn(apr[i])] == 0) {
            npk++;
            tkn[psn(apr[i])] = 1;
        }
    }

    for(i=0; i<54; i++) tkn[i] = 0;
    cf = 0;
    ans = N;
    i = 0; j = -1;
    while(1) {
        if(j == n-1 && cf < npk) break;

        if(cf == npk) {
            if(j-i+1 < ans) ans = j-i+1;
            if(tkn[psn(apr[i])] == 1) cf--;
            tkn[psn(apr[i])]--;
            i++;
        } else {
            if(j < n-1) {
                j++;
                if(tkn[psn(apr[j])] == 0) cf++;
                tkn[psn(apr[j])]++;
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}
