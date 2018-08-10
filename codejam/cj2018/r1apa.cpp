#include <iostream>

int main()
{
    int T;
    std::cin>>T;
    for(int t=1; t<=T; t++) {
        int R, C, H, V;

        std::cin>>R>>C>>H>>V;

        char celll[101];
        int cake_cols[101];
        int cake_rows[101];
        int num_chip = 0;

        memset(cake_cols, 0, sizeof(cake_cols));
        memset(cake_rows, 0, sizeof(cake_rows));
        std::cin.getline(celll, 101);
        for(int i=0; i<R; i++) {
            std::cin.getline(celll, 101);
            for(int j=0; j<C; j++) {
                if(celll[j] == '@') {
                    num_chip++;
                    cake_cols[j]++;
                    cake_rows[i]++;
                }
            }
        }

        //solving phase
        std::cout<<"Case #" << t << ": ";
        if(num_chip%(H+1) != 0 || num_chip%(V+1) != 0) {
            std::cout<<"IMPOSSIBLE1"<<std::endl;
            continue;
        }

        int chips_phor, chips_pver;
        chips_phor = num_chip/(H+1);
        chips_pver = chips_phor/(V+1);

        int lh = 0;
        int ct = 0;
        for(int i=0; i<R; i++) {
            ct += cake_rows[i];
            if(ct == chips_phor) {
                lh++;
                ct = 0;
            } else
            if(ct > chips_phor) {
                lh = -1;
                break;
            }
        }
        if(lh < H+1) {
            std::cout<<"IMPOSSIBLE2"<<std::endl;
            continue;
        }

        int lv = 0;
        ct = 0;
        for(int i=0; i<C; i++) {
            ct += cake_cols[i];
            if(ct == chips_pver) {
                lv++;
                ct = 0;
            } else
            if(ct > chips_pver) {
                lv = -1;
                break;
            }
        }
        if(lv < V+1) {
            std::cout<<"IMPOSSIBLE3"<<std::endl;
            continue;
        }

        std::cout<<"POSSIBLE"<<std::endl;
    }

    return 0;
}
