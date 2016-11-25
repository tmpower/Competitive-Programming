// http://codeforces.com/problemset/problem/493/B

#include <iostream>
#define N 200001

using namespace std;
typedef long long int lli;

int main()
{
	int n, last;
	int i, fi, si;
	lli pnt, fs, ss;
	lli fp[N], sp[N];
	
	cin>>n;
	
	fi = 0; si = 0;
	fs = 0; ss = 0;
	for(i=0; i<n; i++) {
		cin>>pnt;
		if(pnt > 0) {
			fs+=pnt;
			fp[fi++] = pnt;
			last = 1;
		} else {
			pnt = pnt * (-1);
			ss+=pnt;
			sp[si++] = pnt;
			last = 0;
		}
	}
	// solve
	if(fs > ss) {
		cout<<"first"<<endl;
	} else
	if(fs < ss) {
		cout<<"second"<<endl;
	} else {
		i = 0;
		while(1) {
			if(i == fi || i == si) break;
			if(fp[i] != sp[i]) break;
			i++;
		}
		if(i == fi && i == si) {
			if(last == 0)
				cout<<"second"<<endl;
			else
				cout<<"first"<<endl;
		} else {
			if(i == fi) {
				cout<<"second"<<endl;
			} else
			if(i == si) {
				cout<<"first"<<endl;
			} else {
				if(fp[i] > sp[i]) {
					cout<<"first"<<endl;
				} else {
					cout<<"second"<<endl;
				}
			}
		}
	}
	
	return 0;
}
