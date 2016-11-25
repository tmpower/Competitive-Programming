// http://codeforces.com/problemset/problem/379/A

#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d%d",&a,&b);

    if(a < b) {
        printf("%d\n",a);
    } else {
        int sum = b+1;
        int t1 = 1, t2 = a-b;

        while(t2 > 0) {
            sum += (1+(t1/b));
            t1++; t2--;
            sum += (t1/b);
            t1 = (t1/b)+(t1%b);
        }
        printf("%d\n",sum);
    }
    return 0;
}
