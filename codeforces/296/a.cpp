// http://codeforces.com/problemset/problem/527/A

#include <iostream>

using namespace std;
typedef long long int lli;

int main()
{
    lli a, b;
    lli ans, tmp;
    cin>>a>>b;

    ans = 0;
    while(a%b != 0) {
        ans += (a/b);
        tmp = a;
        a = b;
        b = tmp % b;
    }
    ans += (a/b);
    cout<<ans<<endl;

    return 0;
}
