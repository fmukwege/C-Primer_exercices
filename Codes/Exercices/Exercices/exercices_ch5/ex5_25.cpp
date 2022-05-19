#include <iostream> 
#include <stdexcept>
using namespace std;

int main(){

    std::cout << "Simple divider - Enter 2 numbers : " << std::endl;
    double n1,n2,result;
    while (std::cin >> n1 >> n2)
    {
        try
        {
           
            if (n2 == 0)
            {
                throw std::out_of_range("Division by 0");
            }
            result = (n1/n2);
            std::cout << result << std::endl;
            
        }
        catch(const std::out_of_range& e)
        {
            std::cerr << e.what() << '\n';
            cout << "please re-enter a pair of numbers \n" << endl;
        }
    
    }
    return 0; 
}