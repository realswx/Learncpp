#ifndef EX7_9_H_INCLUDED
#define EX7_9_H_INCLUDED
#include<iostream>
#include<string>


class Person
{
    std::string name;
    std::string address;

public:
    const std::string &getName() const {
        return name;
    }
    const std::string &getAddress() const {
        return address;
    }

};

std::istream &read(std::istream &is, Person &person) {
    is >> person.name >> person.address;
    if (!is)
        person = Person();
    return is;
}

std::ostream &print(std::ostream &os, const Person &person) {
    os << person.name << person.address;
    return os;
}

#endif // EX7_9_H_INCLUDED
