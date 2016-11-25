// http://codeforces.com/problemset/problem/633/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;

    cin>>a>>b>>c;

    int na, nb, i, j;
    na = c/a;
    nb = c/b;

    int found = 0;

    for(i=0; i<=na; i++) {
        for(j=0; j<=nb; j++) {
            if(i*a + j*b == c) {
                found = 1;
                break;
            }
        }
        if(found == 1) break;
    }
    if(found == 1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
