#include <stdio.h>

int main()
{
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    int t, r, c;
    char grid[101][101];

    int ans;
    int i, j, l1, l2, l3, ti;

    fscanf(fin, "%d", &t);
    for(ti=1; ti<=t; ti++) {

        fscanf(fin, "%d%d", &r, &c);
        for(i=0; i<r; i++) {
            fscanf(fin, "%s", grid[i]);
        }

        ans = 0;
        // top to bottom
        for(i=0; i<c; i++) {

            j = 0;
            while(j < r && grid[j][i] == '.') j++;

            if(j < r && grid[j][i] == '^') {
                
                l1 = i-1;
                while(l1 >= 0 && grid[j][l1] == '.') l1--;
                l2 = i+1;
                while(l2 < c && grid[j][l2] == '.') l2++;
                l3 = j+1;
                while(l3 < r && grid[l3][i] == '.') l3++;

                if(l1 < 0 && l2 >= c && l3 >= r) {
                    ans = -1;
                    break;
                } else {
                    ans++;
                }
            }
        }

        // right to left
        for(i=0; i<r; i++) {
            if(ans == -1) break;
            
            j = c-1;
            while(j >= 0 && grid[i][j] == '.') j--;

            if(j >= 0 && grid[i][j] == '>') {
                
                l1 = i-1;
                while(l1 >= 0 && grid[l1][j] == '.') l1--;
                l2 = i+1;
                while(l2 < r && grid[l2][j] == '.') l2++;
                l3 = j-1;
                while(l3 >= 0 && grid[i][l3] == '.') l3--;

                if(l1 < 0 && l2 >= r && l3 < 0) {
                    ans = -1;
                    break;
                } else {
                    ans++;
                }
            }
        }

        // bottom to top
        for(i=0; i<c; i++) {
            if(ans == -1) break;

            j = r-1;
            while(j >= 0 && grid[j][i] == '.') j--;

            if(j >= 0 && grid[j][i] == 'v') {
                
                l1 = i-1;
                while(l1 >= 0 && grid[j][l1] == '.') l1--;
                l2 = i+1;
                while(l2 < c && grid[j][l2] == '.') l2++;
                l3 = j-1;
                while(l3 >= 0 && grid[l3][i] == '.') l3--;

                if(l1 < 0 && l2 >= c && l3 < 0) {
                    ans = -1;
                    break;
                } else {
                    ans++;
                }
            }
        }

        // left to right
        for(i=0; i<r; i++) {
            if(ans == -1) break;
            
            j = 0;
            while(j < c && grid[i][j] == '.') j++;

            if(j < c && grid[i][j] == '<') {
                
                l1 = i-1;
                while(l1 >= 0 && grid[l1][j] == '.') l1--;
                l2 = i+1;
                while(l2 < r && grid[l2][j] == '.') l2++;
                l3 = j+1;
                while(l3 < c && grid[i][l3] == '.') l3++;

                if(l1 < 0 && l2 >= r && l3 >= c) {
                    ans = -1;
                    break;
                } else {
                    ans++;
                }
            }
        }

        fprintf(fout, "Case #%d: ", ti);
        if(ans == -1) {
            fprintf(fout, "IMPOSSIBLE\n");
        } else {
            fprintf(fout, "%d\n", ans);
        }
    }

    fclose(fin);
    fclose(fout);

    return 0;
}
