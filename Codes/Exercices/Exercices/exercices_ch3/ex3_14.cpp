#include <iostream>
#include <vector>

using namespace std;

int main(){
    int number = 0;
    vector<int> v1;
    cout << "What do you want to record ? Strings or ints ? : " << endl;
    cout << "Enter a number : " << endl; 
    while (cin >> number)
    {
        
        v1.push_back(number);
        cout << "Enter a number : " << endl; 
    }
    
    for (const auto& i : v1) //read-only
    {
        cout << i << endl;
    }
    
    return 0;
}