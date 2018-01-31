#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    for (auto &c : vec)
        c *= c;
    for (auto i : vec)
        cout << i << endl;
    return 0;
}
