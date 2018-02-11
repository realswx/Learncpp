#include<iostream>

using std::cout;
using std::endl;

void reset(int *ip)
{
    *ip = 0; //改变指针ip所指对象的值
    //ip = 0; //只改变了ip的局部拷贝，实参未被改变
}

int main()
{
    int i = 42;
    reset(&i);
    cout << "i = " << i << endl;
    return 0;
}
