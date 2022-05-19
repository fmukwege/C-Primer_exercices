#include "Chapter6.h"

bool counter(){

    static int count = 0;
    count++;
    if (count == 10)
    {
        return false;
    }
    
    return true;
}