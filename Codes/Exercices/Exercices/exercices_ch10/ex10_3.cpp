#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;



int main(int argc, char const *argv[])
{
    vector<int> vec{1,3,4,5};
    vector<double> vec2{1.2,3.444,4.432,5.432};
    int val = 0;
    double val2 = 0;
    
    val = accumulate(vec.cbegin(),vec.cend(),val); // here val is an int so okay 

    // if vec was a vector of double, and we provided val as sum, we would have lost the decimal !
    // always provide as third argument a variable of the same type contained in the container
    cout << "sum of vec is " << val << endl;
    val = 0;
    val =  accumulate(vec2.cbegin(),vec2.cend(),val);
    cout << "sum of vec2 with int as 3rd arg is " << val << endl;
    val2 =  accumulate(vec2.cbegin(),vec2.cend(),val2);
    cout << "sum of vec2 with double as 3rd arg is " << val2 << endl;
    return 0;
}
