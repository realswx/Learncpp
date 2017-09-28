#ifndef EX7_15_H_INCLUDED
#define EX7_15_H_INCLUDED

#include<iostream>
#include<string>
using namespace std;

struct Person;
istream& read(istream&, Person&);

struct Person
{
    Person() = default;
    Person(const string sname, const string saddr):
        name(sname), address(saddr) { }

    string name;
    string address;

    string& getName() const {
        return name;
    }
    string& getAddress() const {
        return address;
    }
};

istream& read(istream& is, Person& item) {
    is >> item.name >> item.address;
    return is;
}
ostream& print(ostream& os, const Person& item) {
    os << item.name << " " << item.address;
    return os;
}

#endif // EX7_15_H_INCLUDED
