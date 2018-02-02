#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> text;
    string line;
    while(getline(cin, line))
        text.push_back(line);
    for (auto it = text.begin();
         it != text.end() && !it->empty(); ++it) {
             for (auto &x : *it)
                x = toupper(x);
             cout << *it << endl;
    }
    return 0;
}
