#include <iostream> 
#include <string> 
#include "templates_ch16.h"
#include "../exercices_ch15/Bulk_quote.h"
using std::cout, std::string;



int main(int argc, char const *argv[])
{
    string a = "HelloEveryone";
    string b = "HiEverybody";
    Bulk_quote bulk1;
    Bulk_quote bulk2;
    auto result = std::move(compare(bulk1,bulk2)); // < operator not overloaded for the class bulk_quote, so do not work 
    cout << result << "\n";
    return result;
}
