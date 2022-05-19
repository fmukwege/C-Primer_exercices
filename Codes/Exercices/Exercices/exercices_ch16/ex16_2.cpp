#include <iostream> 
#include <string> 
#include "templates_ch16.h"

using std::cout, std::string;



int main(int argc, char const *argv[])
{
    string a = "HelloEveryone";
    string b = "HiEverybody";
    auto result = std::move(compare(a,b));
    cout << result << "\n";
    return result;
}
