// http://codeforces.com/problemset/problem/496/B

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, i;
    int a[1001];
    int mn[1001], df, smr, j, ind;
    char ch;

    scanf("%d%c",&n,&ch);
    for(i=0; i<n; i++) {
        scanf("%c",&ch);
        a[i] = ch-'0';
    }

    for(i=0; i<n; i++) mn[i] = 9;

    for(i=0; i<n; i++) {
        df = 10 - a[i];
        smr = 0;
        j = i;
        ind = 0;
        while(ind < n) {
            if(mn[ind] == (a[j]+df)%10) {
                ind++;
                j = (j+1)%n;
            } else {
                if(mn[ind] > (a[j]+df)%10)
                    smr = 1;
                break;
            }
        }

        if(smr) {
            while(ind < n) {
                mn[ind] = (a[j]+df)%10;
                ind++;
                j = (j+1)%n;
            }
        }
    }

    for(i=0; i<n; i++)
        printf("%d",mn[i]);
    printf("\n");

    return 0;
}
