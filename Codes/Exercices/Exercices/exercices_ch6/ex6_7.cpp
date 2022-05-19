#include <iostream> 
#include <stdexcept>

#include "Chapter6.h" //small addition to be coherent with exercise 6.8
using namespace std;

int main(){

    while (counter())
    {
        cout << "We keep on going until the static variable equals 10" << endl;
    }
    
    return 0;
}