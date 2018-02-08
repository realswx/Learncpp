#include<iostream>

using std::cin;
using std::cout;
using std::endl;

void fac() {
    int val;
    cout << "input a number(>0): ";
    cin >> val;
    int sum = 1;
    for (int i = val; i != 0; --i)
        sum *= i;
    cout << "result: " << sum << endl;
}

int main()
{
    fac();
    return 0;
}
