#include <iostream>

using namespace std;

int main()
{
    int t, n, ai;
    int sum_arr, sum_seq, curr_sum, max_ai;

    cin>>t;
    while(t--) {
        cin>>n;

        sum_arr = 0;
        sum_seq = 0;
        curr_sum = 0;
        max_ai = -10001;
        while(n--) {
            cin>>ai;

            max_ai = (ai > max_ai) ? ai : max_ai;

            sum_seq += ((ai > 0) ? ai : 0);

            curr_sum += ai;
            if(curr_sum < 0) {
                curr_sum = 0;
            }

            if(curr_sum > sum_arr) {
                sum_arr = curr_sum;
            }
        }
        if(max_ai < 0) {
            cout<<max_ai<<" "<<max_ai<<endl;
        } else {
            cout<<sum_arr<<" "<<sum_seq<<endl;
        }
    }

    return 0;
}
