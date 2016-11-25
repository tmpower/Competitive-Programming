// http://codeforces.com/problemset/problem/340/A

# include <stdio.h>

int gcd(int p,int q)
{
    if(q > p) return gcd(q,p);

    if(q == 0) return p;
    return gcd(q,p%q);
}

main()
{
    long long x, y;
    long long a, b;
    scanf("%I64d%I64d",&x,&y);
    scanf("%I64d%I64d",&a,&b);
    long long jem = (x*y)/gcd(x,y);
    printf("%I64d\n",(b/jem)-((a-1)/jem));
}
