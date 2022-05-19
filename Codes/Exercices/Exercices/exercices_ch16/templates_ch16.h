/* Definitions of functiontemplates and member functions of class tem-plates are ordinarily put into header files. */

template <typename T>
int compare(const T& first, const T& second){

    if(first < second){return 1;};
    if(first > second){return -1;};
    return 0;
};

// template <typename T, typename O>
// bool findIt(T::iterator& beginning ,T::iterator& ending , const O& value){
//     for (beginning != ending; beginning++)
//     {
//         if (*beginning == value){return true;};
//     }
//     return false;
// };

template <typename T, typename O>
bool findItRight(T& beginning, const O& value){
    for (auto b= beginning.begin(); b != beginning.end(); b++)
    {
        if ((*b) == value){return true;};
    }
    return false;
};