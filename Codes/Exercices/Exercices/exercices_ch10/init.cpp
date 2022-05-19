#include <iostream>
#include <algorithm>

#include <vector>

using namespace std;



int main(int argc, char const *argv[])
{
    vector<int> vec{1,3,4,5};
    int val;
    cin >> val;
    // find returns an iterator to the requested element, or an iterator pointing to the end(second arg) if not found

    // nice way

    // if (find(vec.begin(),vec.end(), 4) != vec.end()) 
    // {
    //     cout << "Present" << endl;
    // }
    // else{
    //     cout << "Not present" << endl;
    // }

    // cooler way
    cout << "The value "<< val << " is " 
    <<  ((find(vec.begin(),vec.end(), val)==vec.end()) ? "not present inside the container " : "present inside the container")<< endl;
    
    return 0;
}
