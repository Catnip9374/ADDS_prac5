#include "FilterGeneric.h"

#include <vector>
class FilterNonPositive:public FilterGeneric{
    public:
        std::vector<int> filter(std::vector<int>);
    private:
        bool g(int x){
            return x < 0 ? true : false;
        }
};