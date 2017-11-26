#include"ex7_11.h"
using namespace std;

int main()
{
    Sales_data item1;
    print(cout, item1);
    cout << endl;

    Sales_data item2("12345");
    print(cout, item2) << endl;

    Sales_data item3("12345", 3, 20.50);
    print(cout, item3) << endl;

    Sales_data item4(cin);
    print(cout, item4) << endl;
    return 0;
}
