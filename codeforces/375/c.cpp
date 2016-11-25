// http://codeforces.com/problemset/problem/723/C

#include <iostream>
#include <string.h>
#include <utility>
#include <set>

using namespace std;
#define N 2001
#define MX 1000000001

typedef pair<int,int> pii;

int main()
{
	int n, m;
	int a[N];
	int ans = 0;

	int sums[N];
	int i, wh, whh;
	set<pii> mins;
	set<pii>::iterator it, it1;
	pii tmpp, tmpp1;

	cin>>n>>m;
	memset(sums, 0, sizeof(sums));
	for(i=0; i<n; i++) {
		cin>>a[i];
		if(a[i] <= m)
			sums[a[i]]++;
	}

	for(i=1; i<=m; i++) {
		tmpp.first = sums[i];
		tmpp.second = i;
		mins.insert(tmpp);
	}

	while(1) {
		it = mins.begin();
		tmpp = (*it);
		if(tmpp.first == n/m) break;
		for(i=0; i<n; i++)
			if(a[i] > m) {
				ans++;
				it = mins.begin();
				tmpp = (*it);
				mins.erase(it);

				wh = tmpp.second;
				tmpp.first++;
				a[i] = wh;

				mins.insert(tmpp);
				break;
			}
		if(i == n) break;
	}

	while(1) {
		it = mins.begin();
		tmpp = (*it);
		if(tmpp.first == n/m) break;
		ans++;
		mins.erase(it);
		tmpp.first++;

		it1 = mins.end();
		it1--;
		tmpp1 = (*it1);
		mins.erase(it1);
		tmpp1.first--;

		whh = tmpp.second;
		wh = tmpp1.second;
		for(i=0; i<n; i++)
			if(a[i] == wh) {
				a[i] = whh;
				break;
			}

		mins.insert(tmpp);
		mins.insert(tmpp1);
	}

	cout<<n/m<<" "<<ans<<endl;
	for(i=0; i<n-1; i++){
		cout<<a[i]<<" ";
	}
	cout<<a[n-1]<<endl;

	return 0;
}
