#include <iostream>
#include <string>


using namespace std;
class Sales_data{

public:
    Sales_data() = default; // default constructor
    Sales_data(double price) : revenue(price){}; //if a price is inserted as argument, this function is launched a revenue = pricefiti
    Sales_data(std::string &s) : bookNo(s){};
    // member function
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
int main() {
  Sales_data total;
  double price;
  if (std::cin >> total.bookNo >> total.units_sold >> price) {
    total.revenue = total.units_sold * price;
    Sales_data trans;
    while (std::cin >> trans.bookNo >> trans.units_sold >> price) {
      trans.revenue = trans.units_sold * price;
      if (total.bookNo == trans.bookNo) {
        total.combine(trans);
      } else {
        std::cout << total.bookNo << " "
                  << total.units_sold << " "
                  << total.revenue << std::endl;
        total.combine(trans);
      }
    }
    std::cout << total.bookNo << " "
              << total.units_sold << " "
              << total.revenue << std::endl;
  } else {
    std::cerr << "No data!" << std::endl;
    return -1;
  }

  return 0;
}
