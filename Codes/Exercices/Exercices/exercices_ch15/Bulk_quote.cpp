#include "Bulk_quote.h"

double Bulk_quote::net_price(size_t n) const{

    if (n >= min_qty)
        return n * (1 - discount) * price;
    else
        return n *price;
};

void Bulk_quote::print_total(std::ostream& os)const{
   os << "The discount is " << discount << "\n";
   os << "You need to buy at least " << min_qty << " to benefit the discount " << "\n";
}

void Bulk_quote::debug(std::ostream& os) const{
    Quote::debug(os);
    os << "From bulk_quote base class : " << "min_qty = " << min_qty << "\n";
    os << "discount : " << discount << "\n"; 
};