#include<iostream>
using namespace std;
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
    int arr = scale(2);
    int i = 2;
    int a = scale(i);
    a += 2;
    cout << arr << endl;
    cout << a << endl;
    return 0;
}
