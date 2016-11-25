// http://codeforces.com/problemset/problem/493/A

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, time0, player, i;
    char hn[21], an[21]; // home name, away name
    char hf[100], af[100]; // home fouls, away fouls
    char team, card;

    scanf("%s%s",hn,an);
    scanf("%d",&n);
    
    memset(hf, 'a', 100);
    memset(af, 'a', 100);
    for(i=0; i<n; i++) {
        scanf("%d %c %d %c\n",&time0,&team,&player,&card);
        if(team == 'h') {
            if(card == 'r') {
                if(hf[player] != 'r') printf("%s %d %d\n",hn,player,time0);
                hf[player] = 'r';
            } else {
                if(hf[player] == 'y') {
                    if(hf[player] != 'r') printf("%s %d %d\n",hn,player,time0);
                    hf[player] = 'r';
                } else {
                    if(hf[player] != 'r') hf[player] = 'y';
                }
            }
        } else {
            if(card == 'r') {
                if(af[player] != 'r') printf("%s %d %d\n",an,player,time0);
                af[player] = 'r';
            } else {
                if(af[player] == 'y') {
                    if(af[player] != 'r') printf("%s %d %d\n",an,player,time0);
                    af[player] = 'r';
                } else {
                    if(af[player] != 'r') af[player] = 'y';
                }
            }
        }
    }

    return 0;
}
