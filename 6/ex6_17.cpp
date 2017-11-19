#include<iostream>

using namespace std;

bool hasUppercase(const string &s) {
    for (auto c : s)
        if (isupper(c))
            return true;
    return false;
}

void toLowercase(string &s) {
    for (auto &c : s)
        if (isupper(c))
            c = tolower(c);
}

int main()
{
    string s("heLlo my Friend");
    bool flag = hasUppercase(s);
    cout << flag << endl;
    toLowercase(s);
    cout << s << endl;
    return 0;
}
