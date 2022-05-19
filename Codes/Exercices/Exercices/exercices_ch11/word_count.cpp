#include <iostream>
#include <string>
#include <fstream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    map<string,size_t> word_count;
    string filename = argv[1];
    string current_word;
    ifstream file(filename,ifstream::out);
    cout << filename << endl;
    while (file >> current_word)
    {
        current_word.tolower();
        ++word_count[current_word];
    }
    
    for (const auto& inst:word_count)
    {
        cout << inst.first << "appears  " << inst.second << " times in the map"<<"\n";
    }
    

    return 0;
}
