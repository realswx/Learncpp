#include<iostream>

using namespace std;
//1 使用标记指定数组程度,对待int时存在问题
void printC(const int *cp) {
    if (cp)
        while (*cp)
            cout << *cp++ <<' ';
}

//2 使用标准库规范
void printSTL(const int *beg, const int *end) {
    while (beg != end)
        cout << *beg++ << endl;
}

//3 显式传递一个表示数组大小的形参
void printPara(const int ia[], size_t size) {
    for (int i = 0; i != size; ++i)
        cout << ia[i] << endl;
}


int main()
{
    int n[] = {1, 2, 3, 4, 5};
    printC(n);
    printSTL(begin(n), end(n));
    printPara(n, end(n) - begin(n));
    return 0;
}
