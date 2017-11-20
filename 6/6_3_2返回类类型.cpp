#include<iostream>
#include<string>

using namespace std;

const string &shorterString(const string &s1, const string &s2) {
    return (s1.size() >= s2.size()) ? s1 : s2;
}

int main()
{
    string s1("fuyhjb");
    string s2("dtuhvjs");
    auto sn = shorterString(s1, s2);
    auto s = shorterString(s1, s2).size();
    cout << sn << endl << s << endl;
    return 0;
}
