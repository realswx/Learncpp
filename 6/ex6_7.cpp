#include<iostream>

using std::cin;
using std::cout;
using std::endl;

size_t count_calls() {
    static size_t ctr = 0;
    return ++ctr;
}

int main()
{
    int val;
    cout << "�������ֵ��";
    cin >> val;
    for (size_t i = 0; i != val; ++i)
        cout << count_calls() << endl;
    return 0;
}
