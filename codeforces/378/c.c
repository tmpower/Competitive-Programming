#include <stdio.h>

#define N 501

int aind[N], ak;
char adir[N];

int a[N], last, j;

int checkr(int l, int r)
{
	if(l == r) return 1;

	int k, nmax = -1, mi, bb;

	for(k=l; k<=r; k++) {
		if(a[k] > nmax) {

			nmax = a[k];
			mi = k;
		} else
		if(a[k] == nmax) {

			if( (k-1 >= l && a[k-1] < a[k]) || ((k+1 <= r && a[k+1] < a[k])) ) {
				mi = k;
			}
		}
	}

	bb = -1;
	if(mi != l) {
		if(a[mi-1] < a[mi]) {
			a[mi] += a[mi-1];
			a[mi-1] = -1;

			aind[ak] = mi - last + j - 1;
			adir[ak] = 'L';
			ak++;

			for(k=mi-1; k<r; k++) {
				a[k] = a[k+1];
			}
			bb = 1;
		} else
		if(mi != r && a[mi+1] < a[mi]) {
			a[mi] += a[mi+1];
			a[mi+1] = -1;

			aind[ak] = mi - last + j - 1;
			adir[ak] = 'R';
			ak++;

			for(k=mi+1; k<r; k++) {
				a[k] = a[k+1];
			}
			bb = 1;
		}
	} else {
		if(a[mi+1] < a[mi]) {
			a[mi] += a[mi+1];
			a[mi+1] = -1;

			aind[ak] = mi - last + j - 1;
			adir[ak] = 'R';
			ak++;

			for(k=mi+1; k<r; k++) {
				a[k] = a[k+1];
			}
			bb = 1;
		}
	}

	if(bb == -1) return 0;
	return checkr(l, r-1);
}

int main()
{
	int n, m, i;
	int b[N];
	int sum;
	
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		scanf("%d", &a[i]);
	}

	scanf("%d", &m);
	for(i=1; i<=m; i++) {
		scanf("%d", &b[i]);
	}

	i = 1;
	j = 1;
	ak = 0;
	last = 0;
	while(1) {
		if(i > n || j > m) break;

		sum = 0;
		while(1) {
			sum += a[i];
			if(sum >= b[j]) break;
			i++;
			if(i > n) break;
		}

		if(sum > b[j]) {
			last = -1;
			break;
		}
		if(sum == b[j]) {
			if(checkr(last+1, i) == 0) {
				last = -1;
				break;
			}
			j++;
		}
		last = i;
		i++;
	}

	if(i <= n || j <= m) {
		last = -1;
	}

	if(last == -1) {
		printf("NO\n");
	} else {
		printf("YES\n");

		for(i=0; i<ak; i++) {
			printf("%d %c\n", aind[i], adir[i]);
		}
	}

	return 0;
}
