#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> process() {
    string expected("gefj");
    string actual("wfueksydvjhx");
    if (expected.empty())
        return { };
    else if (expected == actual)
        return {"functionX", "okay"};
    else
        return {"functionX", expected, actual};
}

int main()
{
    vector<string> vec = process();
    for (auto beg = vec.begin(); beg != vec.end(); ++beg)
        cout << *beg << endl;
    return 0;
}
