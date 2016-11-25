// http://codeforces.com/problemset/problem/716/A

#include <stdio.h>

int main()
{
	int n, i, c;
	int a[100001];
	scanf("%d%d", &n, &c);
	for(i=0;i <n; i++)
		scanf("%d", &a[i]);

	int ans = 1;
	for(i=n-2; i >=0; i--)
		if(a[i+1] - a[i] <= c) ans++;
		else break;

	printf("%d\n", ans);

	return 0;
}
