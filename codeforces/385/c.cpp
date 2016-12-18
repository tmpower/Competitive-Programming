#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int N = 1001;

int vis[N];
int g[N][N], gov[N];

void dfs(int ind, int *ned, int *nnd)
{
	if(vis[ind]) return;
	(*nnd)++;
	vis[ind] = 1;

	int i;
	for(i=1; i<=g[ind][0]; i++) {
		dfs(g[ind][i], ned, nnd);
		(*ned)++;
	}
}

int main()
{
	int n, m, k;
	int i, j, l, ans, tt, ce, cn;

	scanf("%d%d%d", &n, &m, &k);

	for(i=1; i<=n; i++) g[i][0] = 0;

	for(i=0; i<k; i++) scanf("%d", &gov[i]);

	for(i=0; i<m; i++) {
		scanf("%d%d", &j, &l);
		g[j][++g[j][0]] = l;
		g[l][++g[l][0]] = j;
	}

	ans = 0; tt = 0;
	memset(vis, 0, sizeof(vis));
	for(i=0; i<k; i++) {
		ce = 0; cn = 0;

		dfs(gov[i], &ce, &cn);
		ce /= 2;

//		printf("%d => (%d, %d)\n", gov[i], ce, cn);

		if(tt < cn) tt = cn;
		ans += ( (cn * (cn-1))/2 - ce );
	}

	for(i=1; i<=n; i++) {
		if(!vis[i]) {
			ce = 0; cn = 0;

			dfs(i, &ce, &cn);
			ce /= 2;

			ans += ( (cn * (cn-1))/2 - ce );
			ans += tt*cn;
			tt += cn;
		}
	}

	printf("%d\n", ans);

	return 0;
}
