#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){

    vector<int> V;
    int t;
    while (cin >> t)
        V.push_back(t);

    auto s = V.begin();
    auto e = --V.end();

    for( ; s <= e; ++s, --e)
        if(s == e)
            cout << *s << endl;
        else
            cout << *s + *e << endl;

    return 0;
}
