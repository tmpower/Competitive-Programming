// http://codeforces.com/problemset/problem/707/A

#include <stdio.h>

int main()
{
	int n, m, i, j;
	int ans = 0;
	char c1, c2;

	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++)
	for(j=0; j<m; j++) {
		scanf("%c%c", &c2, &c1);
		if(c1 == 'C' || c1 == 'M' || c1 == 'Y') ans = 1;
	}

	if(ans == 0) {
		printf("#Black&White\n");
	} else {
		printf("#Color\n");
	}
	return 0;
}
