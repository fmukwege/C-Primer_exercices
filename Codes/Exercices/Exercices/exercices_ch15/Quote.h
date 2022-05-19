#include <iostream>
class Quote
{
protected:
    double price = 0.0;
private:
    std::string bookNo;
public:
    Quote() =default;
    Quote(const std::string &book, double sales_price):bookNo(book), price(sales_price){ };
    std::string isbn()const {return bookNo;};
    virtual double net_price(std::size_t n) const{ return n*price; } // what needs to be redefined by inherited classes must be virtual
    virtual ~Quote() = default; // always put a virtual destructor in base class
    virtual void print_total(std::ostream& os) const;
    virtual void debug(std::ostream& os) const;
};

