#include <iostream>
#include <string>

using namespace std;

int main(){

    string str1, blk_string;
    cout << "Getting strings" << endl;
    while (cin >> str1)
    {
        blk_string += str1;
    }
    cout << "Here is the longest string we have : " << blk_string << endl;
     
    return 0;
}