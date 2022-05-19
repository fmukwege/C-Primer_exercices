#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    // 3 ways to make a pair : by creating a pair, by using std make_pair, or by pushing a pair {first,second} 
    //inside a 
    // map 
    vector<pair<string,int>> vec;
    map<string,int> mapp = {{"hello",90}}; // 3
    //
    string str = "Hello World";
    auto elem= make_pair(str,5); // 1 et 2
    vec.push_back({"hello",10});
    vec.push_back(elem);
    cout << mapp.at("hello") << "\n";//subscripting is also possible through the key
    // think about a python dictionary
    return 0;
}
