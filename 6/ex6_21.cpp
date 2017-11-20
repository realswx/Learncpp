#include<iostream>

using namespace std;

int compare(const int a, const int *b) {
    return (a > *b) ? a : *b;
}


int main()
{
    int n1, n2, n;
    cin >> n1 >> n2;
    n = compare(n1, &n2);
    cout << n << endl;
    return 0;
}
