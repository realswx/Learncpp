#include<iostream>
#include<vector>

using namespace std;

template <typename T>
int compare(const T &v1, const T &v2) {
    /*
    if (v1 < v2)
        return -1;
    if (v2 < v1)
        return 1;
        */

    return 0;
}

int main()
{
    int i = compare(10, 3);
    cout << i << endl;

    vector<int> vec1{1, 2, 3};
    vector<int> vec2{2, 1, 3};
    cout << compare(vec1, vec2) << endl;

    return 0;
}
