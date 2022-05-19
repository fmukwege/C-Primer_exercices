#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <set>
#include <algorithm>
#include <cctype>

using namespace std;
char lowchar(char c) {return tolower(c);};
int main(int argc, char const *argv[])
{
    map<string,size_t> word_count;
    set<string> words;
    char exclude[] = {' ', '.', ',','#'};// why using a set for this ...
    string filename = argv[1];
    string current_word;
    ifstream file(filename,ifstream::out);
    while (file >> current_word )
    {
        std::transform(current_word.begin(),current_word.end(),current_word.begin(),lowchar); 
        // Remove punctuation
        for (const auto& punct:exclude)
        {
            auto index = current_word.find(punct);
            if (index != current_word.npos)
            {
                current_word.erase(index);
            }
            
        }
        ++word_count[current_word];
        words.insert(current_word);
    }
    
    for (const auto& inst:word_count)
    {
        cout << inst.first <<" " << "appears " << inst.second << " times in the map"<<"\n"; // ordered pair of words and occurence
    }
    for (const auto& i:words)
    {
        cout << "In my set I have :" << " " << i << "\n"; // set : ordered and unique entries
    }
    

    return 0;
}
