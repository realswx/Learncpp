#include<iostream>
#include<string>

using namespace std;

string make_plural(size_t ctr, const string &word,
                   const string &ending = "s") {
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    string word("sdf");
    string ending("tegds");
    cout << "1 " << make_plural(1, "success", "es")
         << " " << make_plural(1, "failure") << endl;
    cout << "2 " << make_plural(2, "success", "es")
         << " " << make_plural(2, "failure") << endl;
    return 0;
}
