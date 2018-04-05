#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

inline string isShorter(const string &s1, const string &s2)
{
    return (s1.size() >= s2.size()) ? s2 : s1;
}

int main()
{
    string s1("assagssdgf");
    string s2("egras");
    cout << isShorter(s1, s2) << endl;
    return 0;
}
