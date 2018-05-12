#include <iostream>
#include <vector>
#include <string>

int main()
{
    int T;

    std::cin>> T;
    for(int t=1; t<=T; t++) {
        std::cout<< "Case #" << t << ": ";

        unsigned long long int D;
        std::string instr;

        std::cin>> D >> instr;

        unsigned long long int curr_d, tmp_cof;
        int counter = 0;
        do {
            curr_d = 0;
            tmp_cof = 1;

            for(int i=0; i<instr.length(); i++) {
                if(instr[i] == 'C') {
                    tmp_cof *= 2;
                } else {
                    curr_d += tmp_cof;
                }
            }

            if(curr_d <= D) {
                break;
            }

            // shift last CHARGE left and count it
            bool still_valid = 0;
            for(int i=instr.length()-2; i>=0; i--) {
                if(instr[i] == 'C' && instr[i+1] == 'S') {
                    instr[i] = 'S';
                    instr[i+1] = 'C';
                    still_valid = 1;
                    break;
                }
            }

            if(!still_valid) {
                counter = -1;
                break;
            }

            counter++;
        } while(1);

        if(counter == -1) {
            std::cout<< "IMPOSSIBLE" << std::endl;
        } else {
            std::cout<< counter << std::endl;
        }
    }

    return 0;
}
