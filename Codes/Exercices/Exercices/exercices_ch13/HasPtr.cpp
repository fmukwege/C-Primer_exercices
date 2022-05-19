#include "HasPtr.h"
using std::cout, std::endl;

// Add a destructor to the HasPtr class
HasPtr::HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {} //constructor
HasPtr::HasPtr(const HasPtr& copie) : ps(new std::string(*copie.ps)), i(copie.i){} //copy constructor
HasPtr& HasPtr::operator=(const HasPtr& copie){ // Copy assignement operator
    i  = copie.i;
    ps = new std::string();
    *ps = *copie.ps;

    return *this;
};
void HasPtr::print() const
    {
        std::cout << this->i << std::endl;
        std::cout << *(this->ps) << std::endl;
    }
HasPtr::~HasPtr(){
    delete ps;
    cout << "Everything has been destroyed" << endl;
}

