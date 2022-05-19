#include <iostream>
#include <memory>
#include <string>
#include <vector>
using std::string, std::cout, std::endl;
class HasPtr
{
public:                                                                                                     // constructor allocates a newstringand a new counter, which it sets to1
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0), use(new std::size_t(1)) {} // copy constructor copies all three data members and increments the counter
    HasPtr(const HasPtr &p) : ps(p.ps), i(p.i), use(p.use) { ++*use; }
    HasPtr &operator=(const HasPtr& orig);
    ~HasPtr();

private:
    std::string *ps;
    int i;
    std::size_t *use; // member to keep track of how many objects share*ps
};

HasPtr& HasPtr::operator=(const HasPtr& orig){
    ++*orig.use; // increment the counter managing how many objects are pointing towards the ps string
    if (*use == 0)
    {
        delete ps;
        delete use;
    }
    ps = orig.ps;
    use = orig.use;
    return *this;
};
HasPtr::~HasPtr(){
    //--*use;
    if (--*use == 0)
    {
        delete ps;
        delete use;
    }
    
}

int main(int argc, char const *argv[])
{
    HasPtr ptr; 
    return 0;
}
