#include<iostream>

using namespace std;

void retset(int *ip) {
    *ip = 0; //�ı�ָ��ip��ָ�����ֵ
    ip = 0; //ֻ�ı���ip�ľֲ�������ʵ��δ���ı�
    cout << "ip = " << ip << endl;
}

int main()
{
    int i = 42;
    retset(&i); //�ı�i��ֵ����i�ĵ�ַ
    cout << "i = " << i << endl; //���i = 0
    return 0;
}
