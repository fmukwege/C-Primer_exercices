#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;


class Dummy{
    public:
        Dummy() {
            abs = 0; 
            cout << "Dummy constructor" << endl; }
        Dummy(const Dummy &orig) : abs(orig.abs) { cout << "Dummy copy constructor" << endl; }
        Dummy &operator=(const Dummy &copie) { 
            abs = copie.abs;
            cout << "Dummy copy assignement constructor" << endl;
            return *this;
        }
        ~Dummy();
    private:
        int abs = 0;
};

Dummy::~Dummy(){
    cout << "deleted" << endl;
}
int main(int argc, char const *argv[])
{
    Dummy premier;
    Dummy deuxieme(premier);
    Dummy troisieme;
    troisieme = deuxieme;
}

