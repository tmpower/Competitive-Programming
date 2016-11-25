// http://codeforces.com/problemset/problem/651/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    int ans;

    cin>>a>>b;

    ans = 0;
    while(1) {
        if(a==0 || b==0) break;
        if(a+b < 3) break;
        if(a < b) {
            a++;
            b-=2;
        } else {
            b++;
            a-=2;
        }
        ans++;
    }

    cout<<ans;

    return 0;
}
