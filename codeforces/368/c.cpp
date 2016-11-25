// http://codeforces.com/problemset/problem/707/C

#include <iostream>

using namespace std;

typedef unsigned long long int ull;

int main()
{
	ull a, b, c;
	cin>>a;
	if(a == 1 || a == 2) {
		cout<<"-1"<<endl;
	} else
	if(a & 1) {
		b = (a*a - 1)/2;
		c = b+1;
		cout<<b<<" "<<c<<endl;
	} else {
		b = (a*a - 4)/4;
		c = b+2;
		cout<<b<<" "<<c<<endl;
	}
	return 0;
}
