#include<iostream>
#include<string>

using namespace std;

inline string isShorter(const string &s1, const string &s2) {
    return (s1.size() >= s2.size()) ? s2 : s1;
}

int main()
{
    cout << isShorter("assagssdgf", "egras") << endl;
    return 0;
}
