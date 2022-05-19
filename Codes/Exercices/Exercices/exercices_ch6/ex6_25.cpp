#include <iostream> 

#include <string>

using namespace std;


int main(int argc, char *argv[]) { 

    string output = "";

    for (size_t i = 1; i < argc; i++) // argv[0] contains the program's name with its path
    {
        cout << argc << endl;
        output += argv[i];
    }
    
    cout << "Here is the concatenated string : " << output << "\n" <<  endl;
    return 0;
}