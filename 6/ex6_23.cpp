#include<iostream>

using namespace std;

//1 C风格
void print(const int *cp) {
    if (cp)
        while (*cp)
            cout << *cp++ << ' ';
}

//2 标准库
void print(const int *beg, const int *end) {
    while (beg != end)
        cout << *beg++ << ' ';
}

//3 传递表示数组大小的实参
void print(const int *cp, size_t n) {
    for (auto i = 0; i != n; ++i)
        cout << cp[i] << ' ';
}

//引用
void printRef(int (&cp)[2]) {
    for (auto arr : cp)
        cout << arr << ' ';
}

int main()
{
    int i = 42;
    int j[2] = {1, 2};
    cout << "C i" << endl;
    print(&i);
    cout << endl << "C j" << endl;
    print(j);
    cout << endl << "STL j" << endl;
    print(begin(j), end(j));
    cout << endl << "size j" << endl;
    print(j, end(j) - begin(j));
    cout << endl << "ref j" << endl;
    printRef(j);
    return 0;
}
