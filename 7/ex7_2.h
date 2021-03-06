#ifndef EX7_2_H_INCLUDED
#define EX7_2_H_INCLUDED

#include<string>

class Sales_data
{
public:
    Sales_data &combine(const Sales_data &rhs);
    std::string isbn() const {
        return bookNo;
    }

public:
    std::string bookNo;
    unsigned units_sold = 0.0;
    double revenue = 0;
};

Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}



#endif // EX7_2_H_INCLUDED
