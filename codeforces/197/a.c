// http://codeforces.com/problemset/problem/339/A

# include <stdio.h>
# include <string.h>

int main()
{
    char cc[101];
    int s1=0,s2=0,s3=0;

    scanf("%s",&cc);

    int len = strlen(cc);
    while(len) {
        len--;
        if(cc[len] == '+') continue;
        if(cc[len] == '1') s1++;
        if(cc[len] == '2') s2++;
        if(cc[len] == '3') s3++;
    }

    int art = s1+s2+s3-1;
    while((s1--) > 0) {
        printf("1");
        if(art>0) {
            printf("+");
            art--;
        }
    }
    while((s2--) > 0) {
        printf("2");
        if(art>0) {
            printf("+");
            art--;
        }
    }
    while((s3--) > 0) {
        printf("3");
        if(art>0) {
            printf("+");
            art--;
        }
    }
    printf("\n");

    return 0;
}
