#include<iostream>

using std::cout;
using std::endl;

void reset(int &i)
{
    i = 0;
}

int main()
{
    int val = 42;
    reset(val);
    cout << val << endl;
    return 0;
}
