#include<iostream>
using namespace std;

int sum(int s1 = 1, int s2 = 1)
{
    int s = s1 + s2;
    return s;
}
int main()
{
    int v1, v2;
    cin >> v1 >> v2;
    int vs1 = sum(v1, v2);
    int vs2 = sum();
    cout << vs1 << endl;
    cout << vs2 << endl;
    return 0;
}
