#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<vector<int>> ivec;
    vector<string> svec = ivec; //cannot initialize a vector of string to a vector of vectors of int 
    vector<string> svec(10, "null"); // list initialization of a vector of 10 strings init at "null"

    return 0;
}