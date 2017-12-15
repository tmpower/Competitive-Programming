#include <iostream>
#include <vector>
#include <cstring>
#include <queue>

using namespace std;

void bfs(vector<unsigned int> *GG, int *dist, int s)
{
    queue<unsigned int> bq;
    unsigned int vv, i;

    bq.push(s);
    dist[s] = 0;
    while(!bq.empty()) {
        vv = bq.front();
        bq.pop();

        for(i=0; i<GG[vv].size(); i++) {
            if(dist[GG[vv][i]] == -1) {
                dist[GG[vv][i]] = dist[vv]+1;
                bq.push(GG[vv][i]);
            }
        }
    }
}

int main()
{
    unsigned int q;
    unsigned int n, m;
    
    unsigned int u, v, s;
    unsigned int a1;

    int dist[1001];
    vector<unsigned int> GG[1001];

    cin>>q;

    while(q--) {

        cin>>n>>m;
        for(a1=1; a1<=n; a1++) {
            GG[a1].clear();
        }
        memset(dist, -1, sizeof(dist));

        for(a1=0; a1<m; a1++){
            cin>>u>>v;
            GG[u].push_back(v);
            GG[v].push_back(u);
        }
        cin>>s;

        bfs(&GG[0], dist, s);

        for(a1=1; a1<n; a1++) {
            if(a1 != s) {
                cout << ((dist[a1] != -1) ? dist[a1]*6 : dist[a1]);
                break;
            }
        } a1++;
        for(; a1<=n; a1++) {
            if(a1 != s) {
                cout << " " << ((dist[a1] != -1) ? dist[a1]*6 : dist[a1]);
            }
        }
        cout << endl;

    }
    return 0;
}
