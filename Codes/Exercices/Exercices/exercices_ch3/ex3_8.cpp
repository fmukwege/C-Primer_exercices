#include <iostream>
#include <string>

using namespace std;

int main(){

    string str1;
    cout << "Getting strings" << endl;
    cin >> str1;
    auto i = 0;
    while(i < (int) (str1.size()))
    {
        str1[i] = 'X'; // beware of not mixing literal string (C origin )
        i++;
    }
    cout << "Changes this to : " << str1 << endl;
     
    return 0;
}
