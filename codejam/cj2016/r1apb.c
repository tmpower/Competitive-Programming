#include <stdio.h>
#include <string.h>

const int N = 2501;

int main()
{
	FILE *fin = fopen("input.txt", "r");
	FILE *fout = fopen("output.txt", "w");

	int t, n, i, j, k, sl;
	int csol[N];

	fscanf(fin, "%d", &t);
	j = 1;
	while(j <= t) {
		fscanf(fin, "%d", &n);

		memset(csol, 0, sizeof(csol));
		for(i=0; i<2*n-1; i++) {
			for(k=0; k<n; k++) {
				fscanf(fin, "%d", &sl);
				csol[sl]++;
			}
		}

		fprintf(fout, "Case #%d:", j);
		for(i=1; i<N; i++) {
			if(csol[i] % 2 == 1) {
				fprintf(fout, " %d", i);
			}
		}
		fprintf(fout, "\n");

		j++;
	}
	
	fclose(fin);
	fclose(fout);
	return 0;
}
