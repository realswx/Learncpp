#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    string s("some string");
    if (s.begin() != s.end()) {
        auto it = s.begin();
        *it = toupper(*it);
    }
    cout << "����ĸ��д�� " << endl
         << s << endl;

    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
        *it = toupper(*it);
    cout << "��һ�����ʴ�д��" << endl
         << s << endl;

    return 0;
}
