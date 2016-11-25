// http://codeforces.com/problemset/problem/716/B

#include <stdio.h>
#include <string.h>

#define N 50001

int main()
{
	char st[N];
	int cnt[26];
	int i, j, l, l1, len, k, f;

	scanf("%s", st);

	len = strlen(st);

	if(len < 26) {
		printf("-1\n");
	} else {
		for(i=0; i<26; i++) cnt[i] = 0;

		l = 0; l1 = 0;
		for(i=0; i<26; i++){
			if(st[i] == '?') l++;
			else {
				cnt[st[i] - 'A']++;
				l1++;
			}
		}

		// BA?????????KLCSJB????????? Z
		j = 0;
		do {
			//check for solution
			if(l1 + l == 26) {
				for(k=j; k<i; k++)
					if(st[k] != '?' && cnt[st[k]-'A'] > 1) break;
				if(k == i) {
					for(k=j; k<i; k++) {
						if(st[k] == '?') {
							for(f=0; f<26; f++) {
								if(cnt[f] == 0) {
									st[k] = f + 'A';
									cnt[f]++;
									break;
								}
							}
						}
					}

					for(f=0; f<len; f++) {
						if(st[f] == '?')
							st[f] = 'A';
					}
					printf("%s\n", st);
					len = 0;
					break;
				}
			}

			if(i == len) break;

			//slide
			if(st[j] == '?') {
				l--;
			} else {
				cnt[st[j] - 'A']--;
				l1--;
			} j++;

			if(st[i] == '?') {
				l++;
			} else {
				cnt[st[i] - 'A']++;
				l1++;
			} i++;
		} while(1);

		if(len != 0) {
			printf("-1\n");
		}
	}

	return 0;
}
