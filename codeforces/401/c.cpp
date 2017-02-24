#include <stdio.h>

int main()
{
	int i, j;
	int l, r, k;

	int n, m;
	scanf("%d%d", &n, &m);

	int c[n+1][m+1];
	int a[n+1][m+1];

	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			scanf("%d", &a[i][j]);
			c[i][j] = 0;
		}
	}

	//calculate columns
	int tmax;
	for(i=0; i<m; i++) {
		c[0][i] = 1;
	} c[0][m] = 1;
	for(i=1; i<n; i++) {
		tmax = 0;
		for(j=0; j<m; j++) {
			if(a[i-1][j] <= a[i][j]) {
				c[i][j] = c[i-1][j]+1;
			} else {
				c[i][j] = 1;
			}
			if(tmax < c[i][j]) tmax = c[i][j];
		}
		c[i][m] = tmax;
	}

	scanf("%d", &k);
	for(i=0; i<k; i++) {
		scanf("%d%d", &l, &r);

		l--; r--;
		if(r-l+1 <= c[r][m]) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}

	return 0;
}
