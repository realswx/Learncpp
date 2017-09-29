#ifndef EX7_41_H_INCLUDED
#define EX7_41_H_INCLUDED

#include<string>
#include<iostream>
using namespace std;

class Sales_data
{
    friend istream &read(istream &is, Sales_data &item);
    friend ostream &print(ostream &os, const Sales_data &item);
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

public:
    Sales_data(const string &s, unsigned n, double p):
        bookNo(s), units_sold(n), revenue(n * p) {
            cout << "Sales_data(const string&, unsigned, double)" << endl;
        }
    Sales_data():Sales_data("", 0, 0.0f) {
        cout << "Sales_data()" << endl;
    }
    Sales_data(const string &s):Sales_data(s, 0, 0.0f) {
        cout << "Sales_data(const string&)" << endl;
    }
    Sales_data(istream &is);

    string isbn() const {
        return bookNo;
    }
    Sales_data &combine(const Sales_data&);

private:
    inline double avg_price() const;

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

inline double Sales_data::avg_price() const {
    return units_sold ? revenue / units_sold : 0;
}


Sales_data::Sales_data(istream &is): Sales_data() {
    cout << "Sales_data(istream&)" << endl;
    read(is, *this);
}
Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
istream &read(istream &is, Sales_data &item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}
ostream &print(ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}
Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}
#endif // EX7_41_H_INCLUDED
