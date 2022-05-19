#include <iostream>


int main(){

    std::cout << "/*"; // this compile cause we just print a string 
    std::cout << "*/"; // this compile cause we just print a string also but below,
    // it does not because of the comma string not finishing and the comments still open
    std::cout << /* "*/" */;     

    return 0;
}

