#include<iostream>
#include<initializer_list>

using namespace std;

void putsum(initializer_list<int> il)
{
    int sum = 0;
    for (auto beg = il.begin(); beg != il.end(); ++beg)
        sum += *beg;
    cout << sum << endl;
}

int main()
{
    putsum({43, 23, 97, 5});
    return 0;
}
