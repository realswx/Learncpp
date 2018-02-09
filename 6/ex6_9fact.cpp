#include"ex6_8.h"
#include<iostream>

using std::cin;
using std::cout;

int fact(int val) {
    if (val == 0 || val == 1)
        return 1;
    else
        return val * fact(val - 1);
}

int func() {
    int n, ret = 1;
    cout << "input a name: ";
    cin >> n;
    while (n > 1)
        ret *= n--;
    return ret;
}
