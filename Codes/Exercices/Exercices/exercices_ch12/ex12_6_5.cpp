#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

// Ex 12.6 with std::shared_ptr
vector<int>* heap_vector(int length){return new vector<int>(length,0);};
void write_vector(vector<int>* vec){
    for (auto& slot : *vec)
    {  
        cout << "Write inside the vector" << endl;
        cin >> slot;
    }
}
void print_vector(vector<int>* vec){
    for (auto& slot : *vec)
    {
        cout << slot<< "\n";
    }
}

int main(int argc, char const *argv[])
{
    auto p_vec = heap_vector(10);
    write_vector(p_vec);
    print_vector(p_vec);
    delete p_vec; // do not forget to release the vec, but in general, avoid 'naked'delete 
    return 0;
}
