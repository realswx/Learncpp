#include<iostream>

using namespace std;

void retset(int *ip) {
    *ip = 0; //改变指针ip所指对象的值
    ip = 0; //只改变了ip的局部拷贝，实参未被改变
    cout << "ip = " << ip << endl;
}

int main()
{
    int i = 42;
    retset(&i); //改变i的值而非i的地址
    cout << "i = " << i << endl; //输出i = 0
    return 0;
}
