#include "FilterGeneric.h"

#include <vector>
class FilterOdd:public FilterGeneric{
    public:
        std::vector<int> filter(std::vector<int>);
    private:
        bool g(int x){
            return (x % 2 != 0) ? true : false;
        }
};