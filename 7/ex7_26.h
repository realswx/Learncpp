#ifndef EX7_26_H_INCLUDED
#define EX7_26_H_INCLUDED

#include<string>
#include<iostream>
using namespace std;

struct Sales_data
{
    friend Sales_data add(Sales_data& lhs, Sales_data& rhs);
    friend istream& read(istream& is, Sales_data& item);
    friend ostream& print(ostream& os, const Sales_data& item);

public:
    Sales_data() = default;
    Sales_data(const string &s): bookNo(s) { }
    Sales_data(const string &s, unsigned n, double p):
        bookNo(s), units_sold(n), revenue(n * p) { }
    Sales_data(istream &is) { read(is, *this); }

    string isbn() const { return bookNo; };
    Sales_data &combine(const Sales_data&);

private:
    inline double avg_price() const;

private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue= 0.0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

istream& read(istream& is, Sales_data& item) {
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

ostream& print(ostream& os, Sales_data& item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}


#endif // EX7_26_H_INCLUDED
