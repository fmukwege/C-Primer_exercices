#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;
class Sales_data{

public:
    Sales_data& combine(const Sales_data& book){
        bookNo = bookNo + book.bookNo;
        revenue = revenue + book.revenue;
        units_sold = units_sold + book.units_sold;
        return *this;
    };
    std::string isbn()const{
        return bookNo;
    };

    double avg_price() const {
    if (units_sold)
        return revenue/units_sold;
    else
        return 0;
    }

    std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

istream &read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}
ostream &print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
    << item.revenue << " ";
    return os;
}