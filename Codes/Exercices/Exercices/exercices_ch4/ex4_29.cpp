
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int x[10]; int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl; // 40 /4 = 10 , sizeof x is 4 bytes* 10 and sizeof *x is the size of the 1st elem of x => 4bytes
    cout << sizeof(p)/sizeof(*p) << endl; // a pointer to an int contains an address that points to smthg. size = size of address memory + what is pointed => (8)/4
    return 0;
}