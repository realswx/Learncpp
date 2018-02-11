#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool isShorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    string s1, s2;
    cout << "s1:" << endl;
    cin >> s1;
    cout << "s2:" << endl;
    cin >> s2;
    bool j;
    j = isShorter(s1, s2);
    if (j)
        cout << "s1 < s2" << endl;
    else
        cout << "s1 > s2" << endl;
    return 0;
}
