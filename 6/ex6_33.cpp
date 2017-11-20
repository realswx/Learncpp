#include<iostream>
#include<vector>

using namespace std;
using iter = vector<int>::iterator;

void factorial(iter beg, iter end) {
    if (beg != end) {
        cout << *beg << " ";
        factorial(next(beg), end);
    }
}

int main()
{
    vector<int> vec {1, 2, 3, 4, 5};
    factorial(vec.begin(), vec.end());
    return 0;
}
