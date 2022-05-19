#include <iostream>
#include <string>

using namespace std;

int main(){

    string s1;
    bool choice = 0;
    cout << "Do you want to get one line at the time or one word ? 0 for line, 1 for word " << endl;
    cin >> choice;
    if (choice)
    {
        while (getline(cin,s1))
        {
            cout << "Getting full lines" << endl;
            cout << s1 << endl;
        }
        
    }
    else{
        while (cin >> s1)
        {
            cout << "Getting words" << endl;
            cout << s1 << endl;
        }
    }

    return 0;
}