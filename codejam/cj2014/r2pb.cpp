#include <stdio.h>

int main()
{
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    int t, ti;
    int n, a[1001];

    int i, j, h, h1, mn, ct, nx[1002], pr[1002], ans;

    fscanf(fin, "%d", &t);
    for(ti=1; ti<=t; ti++) {

        fscanf(fin, "%d", &n);
        for(i=1; i<=n; i++) {
            fscanf(fin, "%d", &a[i]);
            nx[i] = i+1;
            pr[i] = i-1;
        }
        nx[0] = 1;
        pr[n+1] = n;

        ans = 0;
        ct = n;
        while(ct) {

            mn = 1000000001;
            i = nx[0];
            h = 0;
            h1 = 0;
            while(i != n+1) {
                h++;
                if(a[i] < mn) {
                    mn = a[i];
                    j = i;
                    h1 = h;
                }
                i = nx[i];
            }

            if(h1 != ct && h1 != 1) {
                ans += ((h1 <= ct/2) ? h1-1 : ct-h1);
            }
            //printf("ans = %d\n", ans);

            nx[pr[j]] = nx[j];
            pr[nx[j]] = pr[j];

            ct--;
        }
        fprintf(fout, "Case #%d: %d\n", ti, ans);
    }

    fclose(fin);
    fclose(fout);
    return 0;
}
