#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v1; // size is 0. uninitialized vector of int 
    vector<int> v2(10); // size is 10, initialized at 0
    cout << v2[3] << endl;
    vector<int> v3(10, 42); // size is 10, initialized at 42
    vector<int> v4{10}; // size is 1? contains 10
    vector<int> v5{10, 42};  // size is 2, contains 10 and 42
    vector<string> v6{10}; // size is 1, contains 10
    vector<string> v7{10, "hi"}; // size is 10, contains 10 "hi" strings -> curly braces and a number to give the size of the vector
    cout << v7[3] << v7.size() << endl;
    return 0;
}