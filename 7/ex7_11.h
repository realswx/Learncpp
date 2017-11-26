#ifndef EX7_11_H_INCLUDED
#define EX7_11_H_INCLUDED

#include<iostream>
#include<string>
using namespace std;

class Sales_data
{
public:
    Sales_data() = default;
    Sales_data(const string &b) :
        bookNo(b) { }
    Sales_data(const string &b, unsigned u, double r) :
        bookNo(b), units_sold(u), revenue(r) { }
    Sales_data(istream &);

    string const& isbn() const {
        return bookNo;
    };
    Sales_data& combine(const Sales_data&);

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data &Sales_data::combine(const Sales_data& rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

istream &read(istream &is,Sales_data &item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream& print(ostream& os, const Sales_data& item) {
    os << item.isbn() << " " << item.units_sold << " " <<item.revenue;
    return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

Sales_data::Sales_data(istream &is) {
    read(is, *this);
}

#endif // EX7_11_H_INCLUDED
