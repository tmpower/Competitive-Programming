// http://codeforces.com/problemset/problem/586/B

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //variables
    int num_house;

    vector<int> first_row;
    vector<int> second_row;
    vector<int> avenue;

    int i, j, timee;

    //getting input
    cin>>num_house;

    for(i=0; i<num_house-1; i++) { //get first row
        cin>>timee;
        first_row.push_back(timee);
    }
    for(i=0; i<num_house-1; i++) { //get second row
        cin>>timee;
        second_row.push_back(timee);
    }
    for(i=0; i<num_house; i++) { //get avenue
        cin>>timee;
        avenue.push_back(timee);
    }

    //solve the problem
    int min_time1 = 100000;
    int min_time2 = 100000;
    int* fr_left_sum = new int[num_house];
    int* sr_right_sum = new int[num_house];
    //vector <int> fr_left_sum(num_house);
    //vector <int> sr_right_sum(num_house);

    fr_left_sum[0] = 0;
    for(i=1; i<num_house; i++) {
        fr_left_sum[i] = fr_left_sum[i-1]+first_row[i-1];
    }

    sr_right_sum[num_house-1] = 0;
    for(i=num_house-2; i>=0; i--) {
        sr_right_sum[i] = sr_right_sum[i+1]+second_row[i];
    }

/*    for(i=0; i<num_house; i++)
        cout<<fr_left_sum[i]<<" ";
    for(i=0; i<num_house; i++)
        cout<<sr_right_sum[i]<<" ";*/

    for(i=0; i<num_house; i++) {

        if(min_time1 > fr_left_sum[i]+sr_right_sum[i]+avenue[i]) {
            min_time2 = min_time1;
            min_time1 = fr_left_sum[i]+sr_right_sum[i]+avenue[i];
        } else
        if(min_time2 > fr_left_sum[i]+sr_right_sum[i]+avenue[i]) {
            min_time2 = fr_left_sum[i]+sr_right_sum[i]+avenue[i];
        }

    }

    //print the answer
    cout<<min_time1+min_time2<<endl;

    return 0;
}
