// http://codeforces.com/problemset/problem/699/C

#include <stdio.h>

int MIN(int a1, int b1) { return (a1 < b1) ? a1:b1; }

int main()
{
	int n, a, i, ans1, ans2, prev, t1, t2;

	scanf("%d", &n);
	scanf("%d", &prev);
	ans1 = 0;
	ans2 = 0;
	if(prev == 0) {
		ans1 = 1;
		ans2 = 1;
	} else {
		if(prev == 1) ans1 = 1;
		if(prev == 2) ans2 = 1;
	}

	//printf("%d %d\n", ans1, ans2);
	for(i=1; i<n; i++) {
		scanf("%d", &a);

		if(a == 0) {
			if(prev == 1) {
				t1 = MIN(ans1, ans2) + 1;
				t2 = MIN(ans1, ans2) + 1;
			}
			else
			if(prev == 2) {
				t1 = MIN(ans1, ans2) + 1;
				t2 = MIN(ans1, ans2) + 1;
			}
			else
			if(prev == 3) {
				t1 = MIN(ans1, ans2) + 1;
				t2 = MIN(ans1, ans2) + 1;
			} else {
				t1 = MIN(ans1, ans2) + 1;
				t2 = MIN(ans1, ans2) + 1;
			}
		} else
		if(a == 1) {
			if(prev == 1) {
				t1 = MIN(ans1, ans2) + 1;
				t2 = MIN(ans1, ans2+1);
			}
			else
			if(prev == 2) {
				t1 = MIN(ans1, ans2) + 1;
				t2 = MIN(ans1, ans2);
			}
			else
			if(prev == 3) {
				t1 = MIN(ans1, ans2) + 1;
				t2 = MIN(ans1, ans2+1) ;
			} else {
				t1 = MIN(ans1, ans2) + 1;
				t2 = MIN(ans1, ans2);
			}
		} else
		if(a == 2) {
			if(prev == 1) {
				t1 = MIN(ans1, ans2);
				t2 = MIN(ans1, ans2) + 1;
			}
			else
			if(prev == 2) {
				t1 = MIN(ans1+1, ans2);
				t2 = MIN(ans1, ans2) + 1;
			}
			else
			if(prev == 3) {
				t1 = MIN(ans1+1, ans2);
				t2 = MIN(ans1, ans2) + 1;
			} else {
				t1 = MIN(ans1, ans2);
				t2 = MIN(ans1, ans2) + 1;
			}
		} else {
			if(prev == 1) {
				t1 = MIN(ans1, ans2);
				t2 = MIN(ans1, ans2+1);
			}
			else
			if(prev == 2) {
				t1 = MIN(ans1+1, ans2);
				t2 = MIN(ans1, ans2) ;
			}
			else
			if(prev == 3) {
				t1 = MIN(ans1+1, ans2);
				t2 = MIN(ans1, ans2+1);
			} else {
				t1 = MIN(ans1, ans2);
				t2 = MIN(ans1, ans2);
			}
		}
		prev = a;
		ans1 = t1;
		ans2 = t2;
		//printf("%d %d\n", ans1, ans2);
	}

	printf("%d\n", MIN(ans1,ans2));
	
	return 0;
}
