// http://codeforces.com/problemset/problem/705/B

#include <iostream>

using namespace std;

typedef unsigned long long int ull;

int main()
{
	ull ai;
	int n, i;
	int n1;

	cin>>n;
	n1=0;
	for(i=0; i<n; i++) {

		cin>>ai;
		if(ai % 2 == 0) n1++;

		if(n1%2 == 1) cout<<1<<endl;
		else cout<<2<<endl;
	}

	return 0;
}
