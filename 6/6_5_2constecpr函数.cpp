#include<iostream>

using std::cout;
using std::endl;

constexpr int new_sz()
{
    return 42;
}

constexpr size_t scale(size_t cnt)
{
    return new_sz() * cnt;
}

int main()
{
    constexpr int foo = new_sz();
    cout << foo << endl;
    int i = 2;
    cout << scale(i) << endl;
    return 0;
}
