#include<iostream>
#include<string>

using namespace std;

inline const string &
shorterString(const string &s1, const string &s2) {
    return (s1.size() >= s2.size()) ? s1 : s2;
}

int main()
{
    string str1("tger");
    string str2("htess");
    cout << shorterString(str1, str2) << endl;
    return 0;
}
