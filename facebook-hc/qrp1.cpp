#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::ifstream infile("input.txt");
    std::ofstream outfile("output.txt");
    
    int T;
    infile>>T;

    for(int t=1; t<=T; t++) {
        int N, K;
        unsigned long long int V;
        std::vector< std::string > campuses;

        infile>>N>>K>>V;

        std::string cm;
        for(int i=0; i<N; i++) {
            infile>>cm;
            campuses.push_back(cm);
        }

        int rem = ((V-1)*K) % N;

        outfile<<"Case #"<<t<<":";
        for(int i=0; i<K-(N-rem); i++) {
            outfile<<" "<<campuses[i];
        }
        int tail = (rem+K > N) ? N : rem+K;
        for(int i=rem; i<tail; i++) {
            outfile<<" "<<campuses[i];
        }
        outfile<<std::endl;
    }

    infile.close();
    outfile.close();
    return 0;
}
