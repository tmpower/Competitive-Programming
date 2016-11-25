// http://codeforces.com/problemset/problem/592/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char ch;
    int i, j, k;
    int board[9][9];
    for(i=0; i<8; i++) {
        for(j=0; j<8; j++) {
            board[i][j] = 0;
            cin>>ch;
            if(ch == 'B') board[i][j] = -1;
            else
            if(ch == 'W') board[i][j] = 1;
        }
    }

    int black, white, bosh;
    black = 10;
    white = 10;

    for(i=0; i<8; i++) {
        for(j=0; j<8; j++) {
            if(board[i][j] == -1) {
                bosh = 1;
                for(k=i+1; k<8; k++) {
                    if(board[k][j] != 0) {
                        bosh = 0;
                        break;
                    }
                }
                if(bosh) {
                    if(black > 7-i) black = 7-i;
                }
            } else
            if(board[i][j] == 1) {
                bosh = 1;
                for(k=i-1; k>=0; k--) {
                    if(board[k][j] != 0) {
                        bosh = 0;
                        break;
                    }
                }
                if(bosh) {
                    if(white > i) white = i;
                }
            }
        }
    }

    if(black < white) {
        cout<<"B"<<endl;
    } else {
        cout<<"A"<<endl;
    }

    return 0;
}
