#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
	int n, i, j, ans;
	int taken[1001];
	vector<int> v1, v2;
	char s1[1001], s2[1001];

	scanf("%d", &n);
	scanf("%s%s", s1, s2);

	for(i=0; i<n; i++) {
		j = s1[i] - '0';
		v1.push_back(j);

		j = s2[i] - '0';
		v2.push_back(j);
	}

	sort(v2.begin(), v2.end());

	memset(taken, 0, sizeof(taken));
	ans = 0;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(!taken[j] && v1[i] <= v2[j]) {
				taken[j] = 1;
				break;
			}
		}
		if(j == n) ans++;
	}

	printf("%d\n", ans);

	memset(taken, 0, sizeof(taken));
	ans = 0;
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(!taken[j] && v1[i] < v2[j]) {
				taken[j] = 1;
				ans++;
				break;
			}
		}
	}

	printf("%d\n", ans);

	return 0;
}
