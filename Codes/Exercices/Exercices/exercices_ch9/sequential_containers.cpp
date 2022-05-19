#include <iostream>
#include <vector> // extendable array, easy push back, delete and access
#include <deque> // double ended queue, easy push back/front , delete and access
#include <list> // double linked list, easy insertion 
#include <string> // vector of char like structure
#include <array> //Fixed-size array similar to the C style ones. Prefer these instead of C style array if there is a need of fixed size container

using namespace std;
int main(int argc, char const *argv[])
{
    // always prioritize vector and access them with iterators.
    vector<int> vec{1,2,3,4} ; 
    deque<int> deq(vec.begin(),vec.end()) ;// initialize by copying everything between the 2 iterators position
    // then to optimize your code, see if there isn't a better data structure for your operation
    
    // Common perations on vectors, there is more 
    vec.push_back(3);
    vec.at(2); // Returns the element at the given index 
    //vec.clear();
    // you can do the same on a deque
    // Here is how to swap data between containers of the same type
    // deque<int> deq2;
    // deq.swap(deq2);

    list<int> llist;
    array<int,9> arrai; //type of object contained and size

    // How to define an iterator to iterate through an given container
    auto rit = vec.rbegin();
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++, rit++)
    {
        cout << " Vec For loop : "<< *rit << " "<< *it << endl; // deference the iterator
    }
    // but you can use different types of iterators
    // use auto to keep it easy 
    for (auto itd = deq.begin(); itd != deq.end(); itd++)
    {
        cout << " deq For loop : "<< " "<< *itd << endl; // deference the iterator
    }
    auto it1 = vec.rbegin(); // reverse iterator to access ... in reverse
    auto it3 = vec.cbegin(); // vector<int>::const_iterator : read only access
    auto it4 = vec.crbegin();// vector<int>::const_reverse_iterator reverse read only access
    return 0;
}
