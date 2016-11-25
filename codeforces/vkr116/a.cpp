// http://codeforces.com/problemset/problem/658/A

#include <bits/stdc++.h>

using namespace std;

#define maxx(a,b) (a > b) ? a:b

int main()
{
    int n, c, i;
    int p[51], t[51];
    int sL, sR, tm1;

    cin>>n>>c;
    for(i=0; i<n; i++)
        cin>>p[i];
    for(i=0; i<n; i++)
        cin>>t[i];

    sL = 0;
    sR = 0;

    tm1 = 0;
    for(i=0; i<n; i++) {
        tm1+=t[i];
        sL += maxx(0, (p[i] - c * tm1));
    }

    tm1 = 0;
    for(i=n-1; i>=0; i--) {
        tm1+=t[i];
        sR += maxx(0, (p[i] - c * tm1));
    }

    if(sL > sR) {
        cout<<"Limak"<<endl;
    } else
    if(sL < sR) {
        cout<<"Radewoosh"<<endl;
    } else {
        cout<<"Tie"<<endl;
    }

    return 0;
}
