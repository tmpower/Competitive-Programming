// http://codeforces.com/problemset/problem/591/A

#include <iostream>

using namespace std;

int main()
{
    double t, l, p, q;

    cin>>l>>p>>q;

    t = l/(p+q);
    cout<<t*p<<endl;

    return 0;
}
