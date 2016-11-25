// http://codeforces.com/contest/431/problem/A

#include<stdio.h>

int main()
{
    int a[5], i, s;
    char ss[100001];
    scanf("%d%d%d%d",&a[1],&a[2],&a[3],&a[4]);
    scanf("%s",ss);
    i=0; s=0;
    while(1) {
        if(ss[i] == '\0') break;
        s+=(a[ss[i]-'0']);
        i++;
    }
    printf("%d\n",s);
    return 0;
}
