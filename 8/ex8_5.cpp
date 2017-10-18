#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

void ReadFileToVector(const string &fileName, vector<string> &vec) {
    ifstream ifs(fileName);
    if (ifs) {
        string buf;
        while (ifs >> buf)
            vec.push_back(buf);
    }
}
int main()
{
    vector<string> vec;
    ReadFileToVector("data.txt", vec);
    for (const auto &str : vec)
        cout << str << endl;
    return 0;
}
