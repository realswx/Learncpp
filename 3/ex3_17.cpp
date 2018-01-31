#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
    vector<string> vec;
    string s;
    while (cin >> s)
        vec.push_back(s);
    cout << "´óÐ´ºó£º" << endl;
    for (auto &c : vec) {
        for (auto &c1 : c)
            c1 = toupper(c1);
    }
    for (auto i : vec)
        cout << i << endl;
    return 0;
}
