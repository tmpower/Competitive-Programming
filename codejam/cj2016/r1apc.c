// https://code.google.com/codejam/contest/4304486/dashboard#s=p2

#include <stdio.h>
#include <string.h>

#define N 1001

int main()
{
	FILE *fin = fopen("input.txt", "r");
	FILE *fout = fopen("output.txt", "w");

	int n, t;
	int g[N], mx[N], vis[N];
	int ans, curr, i, j, ta, ti;

	fscanf(fin, "%d", &t);
	for(ti=1; ti<=t; ti++) {
		//input
		fscanf(fin, "%d", &n);

		for(i=1; i<=n; i++) {
			fscanf(fin, "%d", &g[i]);
		}

		//solve
		memset(mx, -1, sizeof(mx));
//		for(i=1; i<=n; i++) mx[i] = -1;
		ans = 0;
		for(i=1; i<=n; i++) {

			memset(vis, 0, sizeof(vis));
//			for(j=1; j<=n; j++) vis[j] = 0;
			curr = 1; j = i;

			while(!vis[j]) {

				vis[j] = curr++;
				j = g[j];
			}
			if(ans < curr - vis[j]) ans = curr - vis[j];

			if(curr - vis[j] == 2 && mx[j] < curr - 3) mx[j] = curr - 3;
		}

		ta = 0;
		for(i=1; i<=n; i++) {
			if(mx[i] != -1) ta += (mx[i]+1);
		}

		if(ans < ta) ans = ta;
		
		//output
		fprintf(fout, "Case #%d: ", ti);
		fprintf(fout, "%d\n", ans);
	}

	fclose(fin);
	fclose(fout);
	return 0;
}
