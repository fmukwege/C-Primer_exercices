#include <iostream>
#include <string>

using namespace std;

int main(){

    string str1;
    cout << "Getting strings" << endl;
    cin >> str1;
    for(auto &i : str1)
    {
        i = 'X'; // beware of not mixing literal string (C origin )
    }
    cout << "Changes this to : " << str1 << endl;
     
    return 0;
}