#include<iostream>
#include<sstream>
using namespace std;

istream &fun(istream &is) {
    string buf;
    while (is >> buf)
        cout << buf << endl;
    is.clear();
    return is;
}
int main()
{
    istringstream iss("hello world");
    fun(iss);
    return 0;
}
