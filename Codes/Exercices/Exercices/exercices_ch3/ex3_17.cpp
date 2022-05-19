#include <iostream>
#include <vector>

using namespace std;

int main(){
    string entry = "";
    vector<string> v1;
    while (cin >> entry)
    {
        v1.push_back(entry);
    }
    int count = 0;
    for (auto& words : v1)
    {
        for(auto& j : words)
            j = toupper(j);
        cout << words;
        ++count;
        if (count == 8)
        {
            cout << endl;
            count = 0;        
        }
    }
    return 0;
}