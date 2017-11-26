#include<iostream>

using namespace std;

istream &read(istream &is, int &item) {
    is >> item;
    return is;
}

ostream &print(ostream &os, const int &item) {
    os << item;
    return os;
}

int main()
{
    int i;
    read(cin, i);
    print(cout, i);
    cout << endl;
    return 0;
}
