// http://codeforces.com/problemset/problem/490/A

#include <stdio.h>

#define N 5001

int main()
{
	// your code goes here
	int n, n1, n2, n3, i, x;
	int t1[N], t2[N], t3[N];
	
	scanf("%d",&n);
	n1 = 0; n2 = 0; n3 = 0;
	for(i=1; i<=n; i++) {
		scanf("%d",&x);
		if(x == 1) {
			t1[n1++] = i;
		} else
		if(x == 2) {
			t2[n2++] = i;
		} else
		if(x == 3) {
			t3[n3++] = i;
		}
	}
	
	int min = n1;
	if(n2 < min) min = n2;
	if(n3 < min) min = n3;
	
	printf("%d\n",min);
	while(min--) {
		printf("%d %d %d\n", t1[--n1], t2[--n2], t3[--n3]);
	}

	return 0;
}
