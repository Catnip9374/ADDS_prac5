#ifndef __FILTERGENERIC_H
#define __FILTERGENERIC_H

#include <vector>

class FilterGeneric{
    public:
        std::vector<int> filter(std::vector<int>);

    private:
        virtual bool g(int x)=0;
};

#endif