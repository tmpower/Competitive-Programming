// http://codeforces.com/problemset/problem/706/A

#include <math.h>
#include <stdio.h>

int main()
{
	int n, i;
	double xi, yi;
	double xa, ya;
	double ans = 1000000, vel;

	scanf("%lf%lf", &xa, &ya);
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		scanf("%lf%lf%lf", &xi, &yi, &vel);

		if(ans > (sqrt( (xi-xa) * (xi-xa) + (yi-ya) * (yi-ya) ) / vel))
			ans = (sqrt( (xi-xa) * (xi-xa) + (yi-ya) * (yi-ya) ) / vel);
	}

	printf("%.7lf\n", ans);
	return 0;
}
