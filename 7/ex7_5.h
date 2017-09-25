#ifndef EX7_5_H_INCLUDED
#define EX7_5_H_INCLUDED

#include<string>
using namespace std;

class Person
{
    string name;
    string address;

public:
    string& getName() const {
        return name;
    }
    string& getAddress() const {
        return address;
    }
};



#endif // EX7_5_H_INCLUDED
