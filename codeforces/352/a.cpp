// http://codeforces.com/problemset/problem/672/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int cnt;
    char tmp[1001];
    char numb[1001] = "";

    scanf("%d", &n);
    cnt = 1;
    while(1) {
        sprintf(tmp, "%d", cnt);
        strcat(numb, tmp);

        if(strlen(numb) >= n) {
            printf("%c", numb[n-1]);
            break;
        }
        cnt++;
    }

    return 0;
}
