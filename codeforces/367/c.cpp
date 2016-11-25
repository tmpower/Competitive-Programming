// http://codeforces.com/problemset/problem/706/C

#include <iostream>
#include <string.h>

using namespace std;

#define N 100001
#define INF 1000000000000000
typedef unsigned long long ull;

int main()
{
	int n, i, j, ln, pr, cr;
	ull cost[N], upr, lwr;
	char prev[2][2][N];
	ull dp[2][2];

	cin>>n;
	for (i=0; i<n; i++) cin>>cost[i];

	cin>>prev[0][0];
	for (i=0; i<strlen(prev[0][0]); i++)
		prev[0][1][strlen(prev[0][0]) - i - 1] = prev[0][0][i];
	prev[0][1][strlen(prev[0][0])] = '\0';

	dp[0][0] = 0;
	dp[0][1] = cost[0];

	for (i=1; i<n; i++) {
		cr = i%2;
		pr = (i+1)%2;

		cin>>prev[cr][0];
		
		//reverse
		ln = strlen(prev[cr][0]);
		for (j=0; j<ln; j++)
			prev[cr][1][ln - j - 1] = prev[cr][0][j];
		prev[cr][1][ln] = '\0';

		( strcmp(prev[cr][0], prev[pr][0]) >= 0 ) ? upr = dp[pr][0] : upr = INF;
		( strcmp(prev[cr][0], prev[pr][1]) >= 0 ) ? lwr = dp[pr][1] : lwr = INF;
		(upr < lwr) ? dp[cr][0] = upr : dp[cr][0] = lwr;

		( strcmp(prev[cr][1], prev[pr][0]) >= 0 ) ? upr = dp[pr][0] + cost[i] : upr = INF;
		( strcmp(prev[cr][1], prev[pr][1]) >= 0 ) ? lwr = dp[pr][1] + cost[i] : lwr = INF;
		(upr < lwr) ? dp[cr][1] = upr : dp[cr][1] = lwr;

		if(dp[cr][0] == INF && dp[cr][1] == INF) {
			cout<<"-1"<<endl;
			break;
		}
	}

	if(i == n) {
		if(dp[cr][0] > dp[cr][1])
			cout<<dp[cr][1]<<endl;
		else
			cout<<dp[cr][0]<<endl;
	}

	return 0;
}
