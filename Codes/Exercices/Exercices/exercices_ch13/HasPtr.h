#include <iostream>
#include <memory>
#include <string>
#include <vector>
class HasPtr
{
public:
    HasPtr(const std::string &s = std::string()); //constructor
    HasPtr(const HasPtr& copie); //copy constructor
    ~HasPtr(); // free the memory allocated for each member of the class. // Destructor
    HasPtr& operator=(const HasPtr& copie);
    void print() const;

private:
    std::string *ps;
    int i;
};
