#include <string>
#include <iostream>

class Sales_data{
public:

    Sales_data& combine(const Sales_data& book);
    std::string isbn()const;
    std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};