#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int T;

    std::cin>> T;
    for(int t=1; t<=T; t++) {

        int n;        
        std::vector<int> odd_ind;
        std::vector<int> even_ind;

        std::cin>> n;

        for(int i=0; i<n; i++) {
            int tmp;
            std::cin>> tmp;
            (i&1) ? odd_ind.push_back(tmp) : even_ind.push_back(tmp);
        }

        std::sort(even_ind.rbegin(), even_ind.rend());
        std::sort(odd_ind.rbegin(), odd_ind.rend());

        int prev = even_ind.back();
        even_ind.pop_back();
        for(int i=1; i<n; i++) {
            if(i&1) {
                if(prev > odd_ind.back()) {
                    std::cout<< "Case #" << t << ": " << i-1 << std::endl;
                    prev = -1;
                    break;
                }

                prev = odd_ind.back();
                odd_ind.pop_back();
            } else {
                if(prev > even_ind.back()) {
                    std::cout<< "Case #" << t << ": " << i-1 << std::endl;
                    prev = -1;
                    break;
                }

                prev = even_ind.back();
                even_ind.pop_back();
            }
        }

        if(prev != -1) {
            std::cout<< "Case #" << t << ": OK" << std::endl;
        }
    }

    return 0;
}
