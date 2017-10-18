#include<iostream>
using namespace std;

istream &fun(istream &is) {
    string sbuf;
    while (is >> sbuf)
        cout << sbuf << endl;
    is.clear();
    return is;
}
int main()
{
    istream &is = fun(cin);
    cout << is.rdstate() << endl;
    return 0;
}
