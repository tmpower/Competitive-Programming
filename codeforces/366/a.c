// http://codeforces.com/problemset/problem/705/A

#include <stdio.h>

int main()
{
	int n, i;
	scanf("%d", &n);
	printf("I hate");
	for(i=1; i<n; i++) {
		printf(" that");
		if(i%2 == 0) printf(" I hate");
		else printf(" I love");
	}
	printf(" it\n");

	return 0;
}
