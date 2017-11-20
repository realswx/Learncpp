#include<iostream>

using namespace std;

int factorial(int val) {
    if (val > 1)
        return factorial(val - 1) * val;
    return 1;
}

int main()
{
    int i, res;
    cin >> i;
    res = factorial(i);
    cout << res << endl;
    return 0;
}
