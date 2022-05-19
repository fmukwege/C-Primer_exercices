#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;


class HasPtr
{
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
    // HasPtr(const HasPtr& copie) { // ugly manner 
    //     this->i = copie.i;
    //     this->ps = copie.ps;// don't just redirect the pointer, you make 2 pointers pointing to the same address..   
    // }
    HasPtr(const HasPtr& copie) : ps(new string(*copie.ps)), i(copie.i){} // elegant manner
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


int main(int argc, char const *argv[])
{
    HasPtr hello("Hey");
    HasPtr you;
    you = hello;
    you.print();
    return 0;
}

