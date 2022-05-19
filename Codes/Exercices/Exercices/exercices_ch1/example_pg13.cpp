#include <iostream>
int main()
{
    int sum = 0;
    // sum values from 1 through 10 inclusive
    /*
    The execution is as follow : 
    1. Initialize val at 1
    2. Do the test -> if yes : execute the body of the for loop 
    3. When body finished, increment val BEFORE evaluating or using it. if val++, evaluate it and then incremente
    4. Repeat starting from 2. 
    */
    for (int val = 1; val < 10; ++val){
        sum += val; // equivalent to sum = sum + val
        std::cout << "Sum of 1 to 10 inclusive is "
        << sum << std::endl;
    }
    return 0;
}