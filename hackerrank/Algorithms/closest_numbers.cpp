#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

int main()
{
    unsigned int n;
    vector<int> arr;
    vector<unsigned int> indexes;
    unsigned int i, min_diff;
    int ai;

    cin>>n;
    for(i=0; i<n; i++) {
        cin>>ai;
        arr.push_back(ai);
    }

    sort(arr.begin(), arr.end());
    assert(arr[0] <= arr[n-1]);

    min_diff = 100000000;

    for(i=1; i<n; i++) {
        if(min_diff > arr[i] - arr[i-1]) {
            min_diff = arr[i] - arr[i-1];
            
            indexes.clear();
            indexes.push_back(i);
        } else
        if(min_diff == arr[i] - arr[i-1]) {
            indexes.push_back(i);
        }
    }
    cout<<arr[indexes[0]-1]<<" "<<arr[indexes[0]];
    for(i=1; i<indexes.size(); i++) {
        cout<<" "<<arr[indexes[i]-1]<<" "<<arr[indexes[i]];
    }

    return 0;
}
