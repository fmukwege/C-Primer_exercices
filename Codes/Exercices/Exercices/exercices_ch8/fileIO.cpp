#include <iostream>
#include <string>
#include <fstream>
using namespace std;
ostream& write_from_input(ostream& out){//ofstream inherit from ostream so i can use a genearal ostream in the definition of my function
    string str;
    while (cin >> str)
    {
        out << "Wow you just entered this : " << str << endl;
        
    }
    out << "Stopped" << endl;

    cout << "Stopped" << endl;
    return out;
}
istream& read_from_input(istream& is){

    string str;
    while (is >> str)
    {
        cout << "Wow you just entered this : " << str << endl;
        
    }
    cout << "Stopped" << endl;
    return is;
}
int main(int argc, char const *argv[])
{
    ifstream ifs("test.txt", ifstream::app);
    ofstream outputfile("output.txt", ofstream::app);
    int input;
    cin >> input; // If you input a number, you'll get one, but if you input a
    cout << input << endl;
    //read_from_input(cin);
    write_from_input(outputfile);
    return 0;
}
