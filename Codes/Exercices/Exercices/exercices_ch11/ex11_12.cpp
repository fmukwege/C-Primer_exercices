#include <iostream>
#include <string>
#include <vector>
#include <map>
/*
This code is awfully written, do not even do smthg like that again
*/


int main(int argc, char const *argv[])
{
    std::vector<int> vec{1,2,3,4,6,77};
    std::string str;
    int count = 0;
    std::map<int,std::string> storage;
    std::vector<std::pair<int,std::string>> storage2;// as required in the exercice but f*** it
    auto it = storage.begin();
    while (std::cin >> str)
    {
        storage.insert(std::make_pair(vec[count],str));
        std::cout << it->first << "and the second is :" << it->second<<"\n"; 
        ++count;
        if (count == vec.size())
        {
            break;
        }
        
    }
    
    return 0;
}
