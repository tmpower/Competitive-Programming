#include <stdio.h>

#define N 100001

int trabs(int a)
{
	if(a < 0) return -1*a;
	return a;
}

int main()
{
	int n, i, sum1, sum2, maxx, ans;
	int a[N], b[N];

	scanf("%d", &n);
	sum1 = 0;
	sum2 = 0;
	for(i=0; i<n; i++) {
		scanf("%d%d", &a[i], &b[i]);
		sum1 += a[i];
		sum2 += b[i];
	}

	maxx = trabs(sum1 - sum2);
	ans = 0;
	for(i=0; i<n; i++) {
		sum1 -= a[i];
		sum2 -= b[i];

		sum1 += b[i];
		sum2 += a[i];

		if(maxx < trabs(sum1 - sum2)){
			maxx = trabs(sum1 - sum2);
			ans = i+1;
		}

		sum1 -= b[i];
		sum2 -= a[i];

		sum1 += a[i];
		sum2 += b[i];
	}

	printf("%d\n", ans);

	return 0;
}