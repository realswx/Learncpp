#include<iostream>
#include<vector>

using std::cin;
using std::vector;

int main()
{
    vector<int> vec;
    int num;
    while (cin >> num)
        vec.push_back(num);
    return 0;
}
