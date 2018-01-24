#ifndef EX7_12_H_INCLUDED
#define EX7_12_H_INCLUDED

#include<string>
#include<iostream>

struct Sales_data;
std::istream& read(std::istream &, Sales_data &);

struct Sales_data
{
    Sales_data() = default;
    Sales_data(const std::string &b) : bookNo(b) { }
    Sales_data(const std::string &b, unsigned u, double r):
        bookNo(b), units_sold(u), revenue(r * u) { }
    Sales_data(std::istream &is) { read(is, *this); }

    std::string isbn() const { return bookNo; };
    Sales_data &combine(const Sales_data&);

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue= 0.0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

std::istream& read(std::istream& is, Sales_data& item) {
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

std::ostream& print(std::ostream& os, Sales_data& item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

#endif // EX7_12_H_INCLUDED
