#include <iostream>
#include <vector>
using namespace std;

int main(){
    int an_int;
    double a_double;
    float a_float;
    char a_char;
    char a_cstylestring[] = {"a string"};
    int an_array[]={1,3,2,4,9,0};
    double* ip = &a_double;
    std::vector<int> a_intvector ={1,3,2,4,9,0};
    // Size in bytes 
    size_t size = 0;

    size = sizeof(an_int);
    cout << size << endl;
    size = sizeof(a_double);
    cout << size << endl;
    size = sizeof(a_float);
    cout << size << endl;
    size = sizeof(a_char);
    cout << size << endl;
    size = sizeof(a_cstylestring);
    cout << size << endl;
    size = sizeof(an_array);
    cout << size << endl;
    size = sizeof(a_intvector);
    cout << size << endl;
    size = sizeof(ip);
    cout << size << endl;
    cout << sizeof(*ip)<<endl;
    return 0;
}