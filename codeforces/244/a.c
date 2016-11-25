// http://codeforces.com/problemset/problem/427/A

# include <stdio.h>

int main()
{
    int n, a, ss=0, ans=0;
    scanf("%d",&n);
    while(n--) {
        scanf("%d",&a);
        if(a < 0) {
            if(ss > 0) {
                ss--;
            } else {
                ans++;
            }
        } else {
            ss+=a;
        }
    }
    printf("%d\n",ans);
    return 0;
}
