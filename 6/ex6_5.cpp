#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int abs(int val)
{
    return val >=0 ? val : -val;
}

int main()
{
    int val;
    cout << "input a number: ";
    cin >> val;
    int num;
    num = abs(val);
    cout << "result: " << num << endl;
    return 0;
}
