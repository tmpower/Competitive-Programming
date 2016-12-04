#include <stdio.h>
#include <string.h>
#include <deque>

using namespace std;

const int N = 1001;

int main()
{
	FILE *fin = fopen("input.txt", "r");
	FILE *fout = fopen("output.txt", "w");

	int t, n, i, j;
	char wd[N];
	deque <char> nw;

	fscanf(fin, "%d", &t);
	j = 1;
	while(j <= t) {
		fscanf(fin, "%s", wd);

		nw.push_back(wd[0]);
		n = strlen(wd);

		for(i=1; i<n; i++) {
			if(wd[i] < nw.front()) {
				nw.push_back(wd[i]);
			} else {
				nw.push_front(wd[i]);
			}
		}

		fprintf(fout, "Case #%d: ", j);
		for(i=0; i<n; i++) {
			fprintf(fout, "%c", nw.front());
			nw.pop_front();
		}
		fprintf(fout, "\n");

		nw.clear();
		j++;
	}

	fclose(fin);
	fclose(fout);
	return 0;
}
