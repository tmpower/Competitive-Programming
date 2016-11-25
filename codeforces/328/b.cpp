// http://codeforces.com/problemset/problem/592/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    long long int ans;
    long long int left, right;
    long long int i;

    cin>>n;

    ans = n-2;
    for(i=2; i<=n; i++) {
        right = i-3;
        left = n-i-1;

        if(left > 0) {
            ans += left;
        }
        if(right > 0) {
            ans += right;
        }
    }

    cout<<ans<<endl;
    return 0;
}
