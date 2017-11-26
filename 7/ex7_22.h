#ifndef EX7_22_H_INCLUDED
#define EX7_22_H_INCLUDED

#include<iostream>
#include<string>
using namespace std;

class Person;
istream &read(istream &, Person &);

class Person
{
    friend istream &read(istream &is, Person &item);
    friend ostream &print(ostream &os, Person &item);

public:
    Person() = default;
    Person(const string n, const string a) :
        name(n), address(a) { }
    Person(istream &is) {
        read(is, *this);
    }

    string getName() const {
        return name;
    }
    string getAddress() const {
        return address;
    }

private:
    string name;
    string address;
};

istream &read(istream &is, Person &item) {
    is >> item.name >> item.address;
    return is;
}
ostream &print(ostream &os, const Person &item) {
    os << item.name << " " << item.address;
    return os;
}

#endif // EX7_22_H_INCLUDED
