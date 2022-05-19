#include <iostream> 
using namespace std;

int main(){

    int* ip, i, &r = i; //base type of the declaration is int, NOT int*
    //int* ip, ip2; // base type = int, thus ip is a pointer to int and ip2 is a int !!!!
    
    int ival = 1024;
    int *pi = &ival; // pi points to an int
    int **ppi = &pi; // ppi points to a pointer to an int
    cout << "The value of ival\n"
    << "direct value: " << ival << "\n"
    << "indirect value: " << *pi << "\n"
    << "doubly indirect value: " << **ppi
    << endl;
    return 0;
}