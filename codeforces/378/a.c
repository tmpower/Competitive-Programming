// http://codeforces.com/problemset/problem/733/A

#include <stdio.h>
#include <string.h>

int main()
{
	int n, i, j, ans;
	char str[101];

	scanf("%s", str);

	n = strlen(str);

	j = -1;
	ans = 0;
	for(i=0; i<=n; i++) {
		if(ans < i - j) ans = i-j;
		if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y') {
			j = i;
		}
	}

	printf("%d\n", ans);
	
	return 0;
}
