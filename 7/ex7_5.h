#ifndef EX7_5_H_INCLUDED
#define EX7_5_H_INCLUDED

#include<string>

class Person
{
    std::string name;
    std::string address;

public:
    std::string &getName() const {
        return name;
    }
    std::string &getAddress() const {
        return address;
    }
};



#endif // EX7_5_H_INCLUDED
