#include<iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> text;
    string line;
    while(getline(cin, line))
        text.push_back(line);
    auto beg = text.begin(), end = text.end();
    auto mid = text.begin() + (end - beg) / 2;
    string sought("we");
    cout << "查找的词：" << sought << endl;
    while (mid != end && *mid != sought) {
        if (sought < *mid)
            end = mid;
        else
            beg = mid + 1;
        mid = beg + (end - beg) / 2;
    }
    cout << "结果：" << *mid << endl;
    return 0;
}
