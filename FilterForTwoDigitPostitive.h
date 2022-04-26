#include "FilterGeneric.h"

#include <vector>
class FilterForTwoDigitPositive:public FilterGeneric{
    public:
        std::vector<int> filter(std::vector<int>);
    private:
        bool g(int x){
            if(x>99||x<10)
                return false;
            return (x >0) ? true : false;
        }
};