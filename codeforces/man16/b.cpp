// http://codeforces.com/problemset/problem/633/B

#include <bits/stdc++.h>

using namespace std;

int findTZ(int  X)
{
    int i, zcount = 0;

    for (i=5; X/i>=1; i*=5)
          zcount += int(X/i);

    return zcount;
}

int main()
{
    int m, ans = 0;
    cin>>m;

    int st, nd, md, nTZ;
    st = 1;
    nd = 1000000;
    while(st <= nd) {

        md = (st+nd)/2;
        nTZ = findTZ(md);

        if(nTZ == m) { //found
            ans = md;
            break;
        }

        if(nTZ < m) {
            st = md+1;
        } else {
            nd = md-1;
        }
    }

    if(ans == 0) {
        cout<<ans<<endl;
    } else {
        while(findTZ(ans-1) == m) ans--;

        cout<<5<<endl;
        cout<<ans<<" "<<ans+1<<" "<<ans+2<<" "<<ans+3<<" "<<ans+4<<endl;
    }

    return 0;
}
