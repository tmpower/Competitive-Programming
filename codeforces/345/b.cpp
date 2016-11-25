// http://codeforces.com/problemset/problem/651/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, ans;
    int taken[1001];
    vector<int> points;

    cin>>n;
    for(i=0; i<n; i++) {
        cin>>j;
        points.push_back(j);
    }

    sort(points.begin(), points.end());
    memset(taken,0, sizeof(taken));

    ans = 0;
    for(i=0; i<n; i++) {

        for(j=i+1; j<n; j++) {
            if(taken[j]==0 && points[i] < points[j]) {
                taken[j] = 1;
                ans++;
                break;
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}
