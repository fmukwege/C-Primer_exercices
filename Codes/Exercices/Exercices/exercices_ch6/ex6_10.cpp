#include <iostream> 
#include <stdexcept>

using namespace std;

// C style swap

void C_style_echange(int* a, int* b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

// C++ style swap

void Cpp_style_echange(int& a, int& b){

    int temp = a;
    a = b;
    b = temp;

}
int main(){

    int n1,n2;
    cin >> n1 >> n2;
    cout << "Here are the values of n1 : " << n1 << " and n2 : " << n2 << " before the C swap" << endl;
    C_style_echange(&n1,&n2);
    cout << "Here are the values of n1 : " << n1 << " and n2 : " << n2 << " after the C swap" << endl;
    Cpp_style_echange(n1,n2);
    cout << "Here are the values of n1 : " << n1 << " and n2 : " << n2 << " after the C++ swap" << endl;
    return 0;
}