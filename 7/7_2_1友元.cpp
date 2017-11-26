#ifndef 7_2_1��Ԫ_CPP_INCLUDED
#define 7_2_1��Ԫ_CPP_INCLUDED

#include<string>
#include<iostream>
using namespace std;

class Sales_data;
istream& read(istream &, Sales_data &);

class Sales_data
{
    friend Sales_data add(const Sales_data &, const Sales_data &);
    friend istream &read(istream &is, Sales_data &);
    friend ostream &print(ostream &os, const Sales_data &)

public:
    Sales_data() = default;
    Sales_data(const string &b) :
        bookNo(b) { }
    Sales_data(const string &b, unsigned u, double r) :
        bookNo(b), units_sold(u), revenue(r) { }
    string isbn() const {
        return bookNo;
    }
    Sales_data(istream &is);
    Sales_data &combine(Sales_data &);

private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double avg_price() const {
        return units_sold ? (revenue / units_sold) : 0;
    }
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

#endif // 7_2_1��Ԫ_CPP_INCLUDED
