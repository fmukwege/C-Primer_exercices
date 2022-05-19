#include <iostream> 
#include <string> 
#include "templates_ch16.h"

using std::cout, std::string,std::cin;



int main(int argc, char const *argv[])
{
    string a = "HelloEveryone";
    string b = "HiEverybody";
    char cmp;
    cin >> cmp;
    auto result = findItRight(a,cmp);
    cout << result << "\n";
    return result;
}

