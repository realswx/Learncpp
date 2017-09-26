#ifndef EX7_9_H_INCLUDED
#define EX7_9_H_INCLUDED

#include<iostream>
#include<string>
using namespace std;

class Person
{
    string name;
    string address;
public:
    const string& getName() const {
        return name;
    }
    const string& getAddress() const {
        return address;
    }
};

istream& read(istream& is, Person& person) {
    is >> person.name >> person.address;
    if (!is)
        person = Person();
    return is;
}

ostream& print(ostream& os, const Person& person) {
    os << person.name << " " << person.address;
    return os;
}

#endif // EX7_9_H_INCLUDED
