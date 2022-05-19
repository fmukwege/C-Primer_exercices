#include <iostream>
#include <string>

using namespace std;

int main(){

    string str1, str2;
    cout << "Getting strings" << endl;
    while (cin >> str1 >> str2)
    {
        if (str1 < str2)
        {
            cout << str2 << " is bigger than "<< str1 << endl;
        }
        else{
            cout << str1 << " is bigger than "<< str2 << endl;
        }
    }
    return 0;
}