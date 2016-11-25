// http://codeforces.com/problemset/problem/706/B

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int i, j;
	int n, q, ans;
	vector<int> price;

	cin>>n;
	for(i=0; i<n; i++) {
		cin>>j;
		price.push_back(j);
	}
	sort(price.begin(), price.end());
	
	cin>>q;
	for(i=0; i<q; i++) {
		cin>>j;
		ans = upper_bound(price.begin(), price.end(), j) - price.begin();
		cout<<ans<<endl;
	}

	return 0;
}
