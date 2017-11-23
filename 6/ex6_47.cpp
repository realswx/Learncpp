#include<iostream>
#include<vector>

using namespace std;

#define NDEBUG

void printVec(vector<int> &vec) {
    #ifdef NDEBUG
        cout << "vector size: " << vec.size() << endl;
    #endif // NDEBUG
    if (!vec.empty()) {
        auto tmp = vec.back();
        vec.pop_back();
        printVec(vec);
        cout << tmp << " ";
    }
}

int main()
{
    vector<int> vec {1, 2, 3, 4, 5, 6};
    printVec(vec);
    cout << endl;
    return 0;
}
