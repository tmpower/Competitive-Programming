#include <stdio.h>
#include <string.h>

const int N = 1001;

int n, G[N][N];

int getMax(int root, int parent)
{
    int i, mx;
    int max1 = 0, max2 = 0;

    for(i=1; i<=G[root][0]; i++) {
        if(G[root][i] != parent) {
            mx = getMax(G[root][i], root);
            if(mx > max1) {
                max2 = max1;
                max1 = mx;
            } else
            if(mx > max2) {
                max2 = mx;
            }
        }
    }

    if(max2 == 0) return 1;

    return max1 + max2 + 1;
}

int main()
{
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    int tc, ti;
    int i, fr, tt, ans;

    fscanf(fin, "%d", &tc);
    for(ti=1; ti<=tc; ti++) {

        fscanf(fin, "%d", &n);

        memset(G, 0, sizeof(G));
        for(i=1; i<n; i++) {

            fscanf(fin, "%d%d", &fr, &tt);
            G[fr][++G[fr][0]] = tt;
            G[tt][++G[tt][0]] = fr;
        }

        ans = 0;
        for(i=1; i<=n; i++) {
            tt = getMax(i, 0);
            if(tt > ans) ans = tt;
        }

        fprintf(fout, "Case #%d: %d\n", ti, n-ans);
    }

    fclose(fin);
    fclose(fout);
    return 0;
}