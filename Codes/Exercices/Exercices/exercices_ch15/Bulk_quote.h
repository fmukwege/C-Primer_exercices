#include "Quote.h"

class Bulk_quote : public Quote
{
private:
    std::size_t min_qty = 0; // minimum purchase for the discount to apply
    double discount = 0.0;   // fractional discount to apply
public:
    Bulk_quote(/* args */) = default;
    Bulk_quote(const std::string& name, double p , std::size_t st, double dis)
    : Quote(name,p), min_qty(st), discount(dis){};
    double net_price(size_t n) const override ;
    void print_total(std::ostream& os) const override;
    virtual void debug(std::ostream& os) const override;
};

// a public derived class can access the public and protected members of the base class 
// but can only access the private ones through a member function 