// http://codeforces.com/problemset/problem/716/C

#include <iostream>

using namespace std;
typedef long long int lli;

int main()
{
	lli n;
	cin>>n;
	cout<<2<<endl;

	if(n > 1) {
		lli lvl = 2;
		lli k1, k2, k;
		k1 = 1;

		while(lvl <= n) {
			k = lvl+1;
			k1 = lvl-1;
			k2 = k*k*lvl - k1;
			cout<<k2<<endl;
			lvl++;
		}
	}

	return 0;
}
