#include<iostream>

using std::cout;
using std::endl;

void reset(int *ip)
{
    *ip = 0; //�ı�ָ��ip��ָ�����ֵ
    //ip = 0; //ֻ�ı���ip�ľֲ�������ʵ��δ���ı�
}

int main()
{
    int i = 42;
    reset(&i);
    cout << "i = " << i << endl;
    return 0;
}
