#include<iostream>
#include<initializer_list>
#include<vector>

using namespace std;

void error_msg(initializer_list<string> il) {
    for (auto beg = il.begin(); beg != il.end(); ++beg)
        cout << *beg << " ";
    cout << endl;
}

void error_msg(ErrCode e, initializer_list<string> il) {
    cout << e.msg() << ": ";
    for (const auto &elem : il)
        cout << elem << " ";
    cout << endl;
}

int main()
{
    string s("ijhd");
    error_msg({"saf", "gwew", s});
    error_msg(ErrCode(42, {"asg", "tegw"}));
    return 0;
}
