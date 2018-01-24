#ifndef 7_1_4构造函数_H_INCLUDED
#define 7_1_4构造函数_H_INCLUDED

#include<string>

class Sales_data
{
public:
    Sales_data() = default;
    Sales_data(const std::string &b, unsigned u, double r) :
        bookNo(b), units_sold(u), revenue(r * u) { }
    Sales_data(const std::string &b) :
        bookNo(b) { }
    Sales_data(std::istream &);
    std::string isbn() const {
        return bookNo;
    }
    Sales_data &combine(const Sales_data &);
    double avg_price() const;
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};


#endif // 7_1_4构造函数_H_INCLUDED
