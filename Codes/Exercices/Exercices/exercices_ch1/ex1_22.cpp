
#include "Sales_item.h"
#include <iostream>

int main(){

    Sales_item book1,book2;

    std::cin >> book1 >> book2 ;
    if (book1.isbn() == book2.isbn())
    {
        std::cout << book1 + book2 << std::endl;
        return 0;
    }
    else{
        std::cerr << "Not the same ISBN" << std::endl;
        return -1;
    }
    
    

    
}
