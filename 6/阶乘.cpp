#include<iostream>

using namespace std;

int fact(int n) {
    int ret = 1;
    while (n > 1) {
        ret = ret * n;
        n--;
    }
    return ret;
}

int main()
{
    int num;
    cout << "input a number: ";
    cin >> num;
    int j = fact(num);
    cout << num << "! is " <<j << endl;
    return 0;
}
