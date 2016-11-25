// http://codeforces.com/problemset/problem/591/B

#include <iostream>

using namespace std;

#define N 200001

int main()
{
    int n, m;
    char org[N];
    char fake[26];
    char c1, c2;

    int i, j;

    cin>>n>>m;
    cin>>org;

    for(i=0; i<26; i++) {
        fake[i] = (char)(i+'a');
    }

    for(i=0; i<m; i++) {

        cin>>c1>>c2;
        for(j=0; j<26; j++) {
            if(fake[j] == c1) {
                fake[j] = c2;
            } else
            if(fake[j] == c2) {
                fake[j] = c1;
            }
        }
    }

    for(i=0; i<n; i++) {
        org[i] = fake[org[i]-'a'];
    }

    cout<<org;

    return 0;
}
