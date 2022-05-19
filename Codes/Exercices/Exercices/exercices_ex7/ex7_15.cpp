#include <string>
#include <iostream>

using namespace std;

class Person{ // note that all members are public. Therefore the class can be created using either struct or class
    friend void whoAreYou(Person person);
    public:
        std::string name="";
        std::string address=""; // could be private

        // constructors
        Person() = default;
        Person(std::string aname, std::string anaddress) : name(aname), address(anaddress){};
        //~Person(); 
        // member function 
        std::string getName()const {return name;}
        std::string getAddress() const{return address;}

};
void whoAreYou(Person person){
    cout << "I am " << person.getName() << " and I live at " << person.getAddress() << " ." <<endl;
};
int main(){
    Person Frank("Frank", "Rue Van Bortonne 24");
    whoAreYou(Frank);
    return 0;
}