#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::endl;

bool hasUppercase(const string &s)
{
    for (auto c : s)
        if (isupper(c))
            return true;
    return false;
}

void toLowercase(string &s)
{
    for (auto &c : s)
        if (isupper(c))
            c = tolower(c);
}

int main()
{
    string s("hello Darkness");
    cout << s << endl;
    if (hasUppercase(s))
        cout << "It has uppercase." << endl;
    else
        cout << "It does not have uppercase." << endl;
    toLowercase(s);
    cout << s << endl;
    return 0;
}
