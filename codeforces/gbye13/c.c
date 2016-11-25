// http://codeforces.com/problemset/problem/379/C

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int ind;
    int ws;
}Vis;

int compare(const void * a, const void * b)
{
  Vis *orderA = (Vis *)a;
  Vis *orderB = (Vis *)b;
  return ( orderA->ws - orderB->ws );
}

int main()
{
    int n, i, tmp;
    scanf("%d",&n);
    Vis v[n];
    for(i=0; i<n; i++) {
        scanf("%d",&tmp);
        v[i].ws = tmp;
        v[i].ind = i;
    }
    qsort (v, n, sizeof(Vis), compare);
    int nw[n], prev;

    nw[v[0].ind] = v[0].ws;
    prev = v[0].ws;
    for(i=1; i<n; i++) {
        if(v[i].ws <= prev) {
            nw[v[i].ind] = prev+1;
            prev++;
        } else {
            nw[v[i].ind] = v[i].ws;
            prev = v[i].ws;
        }
    }
    for(i=0; i<n-1; i++)
        printf("%d ",nw[i]);
    printf("%d\n",nw[n-1]);
    return 0;
}
