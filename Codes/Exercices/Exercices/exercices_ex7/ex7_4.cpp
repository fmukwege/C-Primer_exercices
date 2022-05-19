#include <string>
#include <iostream>

using namespace std;

class Person{
    public:
        std::string name="";
        std::string address="";

        std::string get_name()const {return name;}
        std::string get_address() const{return address;}

};

int main(){

    return 0;
}