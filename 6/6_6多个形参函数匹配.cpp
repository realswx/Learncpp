#include<iostream>

using namespace std;

void print(int , double ) {
    cout << "IIIIInt" << endl;
}

void print(double m, double n) {
    cout << "DDDDouble" << endl;
}

int main()
{
    print(42, 2.56);
    return 0;
}
