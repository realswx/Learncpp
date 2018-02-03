#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int i;
    vector<int> ivec;
    while (cin >> i)
        ivec.push_back(i);

    if (ivec.empty()) {
        cout << "����������" << endl;
        return 0;
    }
    else if (ivec.size() == 1) {
        cout << *ivec.begin() << "û������Ԫ��";
    }

    for (auto it = ivec.begin(); it + 1 != ivec.end(); ++it)
        cout << *it + *(it + 1) << " ";
    cout << endl;

    for (auto beg = ivec.begin(), end = ivec.end() - 1;
         beg <= end; ++beg, --end)
        cout << *beg + *end << " ";
    cout << endl;

    return 0;
}
