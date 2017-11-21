#include<iostream>

using namespace std;

decltype(odd) *arrPtr(int i) {
    return (i % 2) ? &odd : &even;
}

int main()
{
    int odd[] = {4, 6, 2, 6, 8};
    int even[] = {0, 2, ,4 , 6, 8};

    return 0;
}
