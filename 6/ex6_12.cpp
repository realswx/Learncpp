#include<iostream>

using std::cout;
using std::endl

void reset(int &ip1, int &ip2)
{
    int temp;
    temp = ip1;
    ip1 = ip2;
    ip2 = temp;
}

int main()
{
    int a1 = 23;
    int a2 = 42;
    reset(a1, a2);
    cout << a1 << ' ' << a2 << endl;
    return 0;
}
