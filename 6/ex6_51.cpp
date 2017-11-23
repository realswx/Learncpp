#include<iostream>

using namespace std;

void f() {
    cout << "ÎÞ²ÎÊý" << endl;
}

void f(int ) {
    cout << "IIInt" << endl;
}
void f(double ) {
    cout << "DDDouble" << endl;
}
void f(int , int ) {
    cout << "IIInt , IIInt" << endl;
}

void f(double , double ) {
    cout << "DDDouble , DDDouble" << endl;
}

int main()
{
    f();
    f(24);
    f(42.3);
    f(24, 42);
    f(23.4, 42.3);
    return 0;
}
