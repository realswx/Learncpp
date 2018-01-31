#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::vector;
using std::string;

int main()
{
    vector<string> vec;
    string s;
    while (cin >> s)
        vec.push_back(s);
    return 0;
}
