#include "Bulk_quote.h"


int main(int argc, char const *argv[])
{
    Bulk_quote vrac("Frank",34,5,0.50);
    vrac.print_total(std::cout);
    vrac.debug(std::cout);
    return 0;
}
