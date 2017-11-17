#include<iostream>

using namespace std;

size_t count_calls() {
    static size_t ctr = 0;
    return ++ctr;
}
int printabc() {
    cout << "lawfadsjbsadg" << endl;
}

int main()
{
    cout << "1" << endl;
    cout << count_calls() << endl;
    cout << count_calls() << endl;
    printabc();
    cout << printabc << endl;
    cout << count_calls() << endl;
    printabc();
    for (int i = 0; i < 3; i++)
        cout << count_calls() << endl;
    return 0;
}
