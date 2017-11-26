#ifndef EX7_4_H_INCLUDED
#define EX7_4_H_INCLUDED
#include<string>

struct Person
{
    std::string name;
    std::string address;

    std::string &getName() const {
        return name;
    }
    std::string &getAddress() const {
        return address;
    }
};

#endif // EX7_4_H_INCLUDED
