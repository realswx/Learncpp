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

#endif // EX7_6_H_INCLUDED
