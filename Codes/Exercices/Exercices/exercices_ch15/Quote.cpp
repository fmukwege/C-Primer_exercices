#include "Quote.h"

void Quote::print_total(std::ostream& os) const {
    //os << "The isbn is " <<  isbn() << "\n";
    os << "Here is the price of the book " << price << "\n";
};
void Quote::debug(std::ostream& os) const{

    os << "Here are the members" << '\n';
    os << "From Quote base class : " << "price = " << price << "\n";
    os << "bookNo : " << isbn() << "\n"; 
};