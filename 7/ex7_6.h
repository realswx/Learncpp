#ifndef EX7_6_H_INCLUDED
#define EX7_6_H_INCLUDED

#include<iostream>
#include<string>
using namespace std;

struct Sales_data
{
    string const& isbn() const {
        return bookNo;
    };
    Sales_data& combine(const Sales_data&);

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
istream& read(istream& is,Sales_data& item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}
Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

#endif // EX7_6_H_INCLUDED
