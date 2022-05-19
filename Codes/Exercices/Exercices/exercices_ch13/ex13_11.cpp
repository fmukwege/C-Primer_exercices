#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

// Add a destructor to the HasPtr class


class HasPtr
{
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
    HasPtr(const HasPtr& copie) : ps(new string(*copie.ps)), i(copie.i){}
    ~HasPtr(); // free the memory allocated for each member of the class. 
    // Produces a successive call of destructor until the built-in types destructors
    // Here since I am allowing memory on the heap, i need to define it and call a delete
    // Wouldn't have been necessary with a smart pointer 
    HasPtr& operator=(const HasPtr& copie){
        i  = copie.i;
        ps = new string();
        *ps = *copie.ps;

        return *this;
    };
    void print() const
    {
        cout << this->i << endl;
        cout << *(this->ps) << endl;
    }

private:
    std::string *ps;
    int i;
};

HasPtr::~HasPtr(){
    delete ps;
    cout << "Everything has been destroyed" << endl;
}

int main(int argc, char const *argv[])
{
    HasPtr hello("Hey");
    HasPtr you;
    you = hello;
    you.print();
    return 0;
}

