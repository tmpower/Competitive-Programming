// http://codeforces.com/problemset/problem/488/A

#include <iostream>
using namespace std;

typedef long long int lli;

int lucky(lli x)
{
	lli rk;

	if(x < 0) x = x*(-1);
	while(x > 0) {
		rk = x%10;
		if(rk == 8) return 1;
		x = x/10;
	}
	return 0;
}

int main()
{
	lli n, i;
	cin>>n;
	
	i=1;
	while(1) {
		if(lucky(n+i)) {
			cout<<i<<endl;
			break;
		}
		i++;
	}	
	return 0;
}
