#ifndef 7_2访问控制与封装_H_INCLUDED
#define 7_2访问控制与封装_H_INCLUDED

class Sales_data
{
public:
    Sales_data() = default;
    Sales_data(const std::string &b) :
        bookNo(b) { }
    Sales_data(const std::string &b, unsigned u, double r) :
        bookNo(b), units_sold(u), revenue(r) { }
    std::string isbn() const {
        return bookNo;
    }
    Sales_data(std::istream &is);
    Sales_data &combine(Sales_data &);

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double avg_price() const {
        return units_sold ? (revenue / units_sold) : 0;
    }
};


#endif // 7_2访问控制与封装_H_INCLUDED
