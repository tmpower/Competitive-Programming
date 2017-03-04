#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    int t, n, x;
    vector <int> a;

    int i, j, ti, ans;

    fscanf(fin, "%d", &t);
    for(ti=1; ti<=t; ti++) {

        fscanf(fin, "%d%d", &n, &x);
        for(i=0; i<n; i++) {
            fscanf(fin, "%d", &j);
            a.push_back(j);
        }

        sort(a.begin(), a.end());

        ans = 0;
        i = 0; j = n-1;
        while(i <= j) {
            if(a[i] + a[j] <= x) {
                i++;
                j--;
            } else {
                j--;
            }
            ans++;
        }
        a.clear();

        fprintf(fout, "Case #%d: %d\n", ti, ans);
    }

    fclose(fin);
    fclose(fout);
    return 0;
}
