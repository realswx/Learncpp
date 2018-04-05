#include<iostream>

using std::cout;
using std::endl;

int factorial(int val)
{
    if (val > 1)
        return factorial(val - 1) * val;
    return 1;
}

int main()
{
    int val = 5;
    int res = factorial(val);
    cout << "5!=" << res << endl;
    return 0;
}
