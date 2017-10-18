#include<iostream>
using namespace std;

istream &fun(istream &is) {
    string sbuf;
    while (is >> sbuf)
        cout << sbuf << endl;
    is.clear();
    return is;
}
