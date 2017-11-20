#include<iostream>

using namespace std;

void rep(int *&ip1, int *&ip2) {
    swap(ip1, ip2);
    cout << *ip1 << endl << *ip2 << endl;
}

int main()
{
    int i1 = 42, i2 = 24;
    auto m = &i1;
    auto n = &i2;
    rep(m, n);
    return 0;
}
