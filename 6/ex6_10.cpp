#include<iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int *ip1, int *ip2)
{
    int temp;
    temp = *ip1;
    *ip1 = *ip2;
    *ip2 = temp;
}

int main()
{
    int a, b;
    cout << "input two number(a and b): ";
    cin >> a >> b;
    swap(&a, &b);
    cout << "result: a=" << a << " b=" << b << endl;
    return 0;
}
