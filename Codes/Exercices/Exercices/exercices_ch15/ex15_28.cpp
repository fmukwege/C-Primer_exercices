#include "Bulk_quote.h"
#include <vector>
#include <memory>
#include <numeric>

using std::vector, std::shared_ptr, std::make_shared, std::accumulate;

int main(int argc, char const *argv[])
{
    vector<shared_ptr<Quote>> vec;
    vec.push_back(make_shared<Bulk_quote>("RHZAOAONCA",50,21,0.6));
    vec.push_back(make_shared<Bulk_quote>("Runrzp!'éfcx",40,22,0.3));
    auto it = vec.begin();
    auto sum = 0;
    for (size_t i = 1; i < 3; i++)
    {
        //std::cout << (*it)->net_price(i) << std::endl;
        sum += (*it)->net_price(i);
        it++;
    }
    std::cout << sum << std::endl;   
    return 0;
}
