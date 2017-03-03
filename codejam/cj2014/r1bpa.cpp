#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
	FILE *fin = fopen("input.txt", "r");
	FILE *fout = fopen("output.txt", "w");

	int tc, ti;
	int n, ans;
	int lsn[101], cnt[101], avg, mnn;
	int i, ii, j;
	char words[101][101], tmp;

	fscanf(fin, "%d", &tc);
	for(ti=1; ti<=tc; ti++) {

		fscanf(fin, "%d", &n);
		for(i=0; i<n; i++) {

			fscanf(fin, "%s", words[i]);
		}

		ans = 0;
		memset(lsn, 0, sizeof(lsn));
		memset(cnt, 0, sizeof(cnt));

		for(i=0; i<strlen(words[0]); ) {

			//get a starting point
			avg = 0;
			tmp = words[0][i];
			j = lsn[0];
			while(tmp == words[0][j]) {
				j++;
				avg++;
			}

			cnt[0] = j - lsn[0];
			lsn[0] = j;
			i = j;

			//got a starting point
			for(ii=1; ii<n; ii++) {
				j = lsn[ii];
				while(tmp == words[ii][j]) {
					j++;
					avg++;
				}
				if(lsn[ii] != j){
					cnt[ii] = j - lsn[ii];
					lsn[ii] = j;
				} else {
					avg = -1;
					break;
				}
			}

			//calculate distances
			if(avg == -1) {
				break;
			}

			mnn = 1000000;
			for(ii=0; ii<n; ii++) {
				avg = 0;
				for(j=0; j<n; j++) {
					avg += abs(cnt[ii] - cnt[j]);
				}
				if(mnn > avg) mnn = avg;
			}
			ans += mnn;
		}

		if(avg != -1) {
			for(i=0; i<n; i++) {
				if(lsn[i] != strlen(words[i])) {
					avg = -1;
					break;
				}
			}
		}

		fprintf(fout, "Case #%d: ", ti);
		if(avg != -1) {
			fprintf(fout, "%d\n", ans);
		} else {
			fprintf(fout, "Fegla won\n");
		}
	}

	fclose(fin);
	fclose(fout);
	return 0;
}
