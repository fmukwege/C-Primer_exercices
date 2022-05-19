#include <iostream> 
#include <stdexcept>
using namespace std;

int main(){

    std::cout << "Simple divider - Enter 2 numbers : " << std::endl;
    double n1,n2;
    std::cin >> n1 >> n2;
    if (n2 == 0) {
        throw std::out_of_range("Division by 0");
    } // we got inf which is an overflow 

    std::cout << (n1/n2) << std::endl;
    return 0; 
}