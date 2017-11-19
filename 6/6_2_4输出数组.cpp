#include<iostream>

using namespace std;
//1 ʹ�ñ��ָ������̶�,�Դ�intʱ��������
void printC(const int *cp) {
    if (cp)
        while (*cp)
            cout << *cp++ <<' ';
}

//2 ʹ�ñ�׼��淶
void printSTL(const int *beg, const int *end) {
    while (beg != end)
        cout << *beg++ << endl;
}

//3 ��ʽ����һ����ʾ�����С���β�
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
