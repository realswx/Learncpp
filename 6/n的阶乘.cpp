#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int val) {
    int ret = 1;
    while (val > 1)
        ret *= val--;
    return ret;
}

int main()
{
    int val;
    cout << "input n: " << endl;
    cin >> val;
    int j = fact(val);
    cout << val << "! is " << j << endl;
    return 0;
}
