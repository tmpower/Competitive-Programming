// http://codeforces.com/problemset/problem/707/B

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

#define N 100001

int main()
{
	int n, m, k;
	int i, j;
	unsigned long long int ans = 0;
	unsigned long long int edg[N][3];
	int flv[N];

	cin>>n>>m>>k;
	for(i=0; i<m; i++) {
		cin>>edg[i][0]>>edg[i][1]>>edg[i][2];
	}

	for(i=0; i<=n; i++)
		flv[i] = 0;
	for(i=0; i<k; i++) {
		cin>>j;
		flv[j] = 1;
	}

	ans = 10000000000;
	if(k != 0) {
		for(i=0; i<m; i++) {
			if( (flv[edg[i][0]] && !flv[edg[i][1]]) || (!flv[edg[i][0]] && flv[edg[i][1]]) ) {
				if(ans > edg[i][2])
					ans = edg[i][2];
			}
		}
	}

	if(ans != 10000000000)
		cout<<ans<<endl;
	else
		cout<<"-1"<<endl;
	return 0;
}
