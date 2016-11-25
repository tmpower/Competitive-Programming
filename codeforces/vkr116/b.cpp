// http://codeforces.com/problemset/problem/658/B

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q, k;
    int i, qtp, qid;
    int ti[150001];
    int wnd[] = {0, 0, 0, 0, 0, 0, 0};

    scanf("%d%d%d", &n, &k, &q);
    for(i=0; i<n; i++) {
        scanf("%d",&ti[i]);
    }

    while(q--) {
        scanf("%d%d", &qtp, &qid);
        qid--;

        if(qtp == 1) {

            for(i=k-1; i>-1; i--) {
                if(wnd[i] < ti[qid]) {
                    wnd[i+1] = wnd[i];
                    wnd[i] = ti[qid];
                } else
                    break;
            }

        } else {

            for(i=0; i<k; i++) {
                if(wnd[i] == ti[qid]) {
                    printf("YES\n");
                    break;
                }
            }

            if(i == k)
                printf("NO\n");
        }
    }

    return 0;
}
