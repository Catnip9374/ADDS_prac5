#ifndef __MAPGENERIC_H
#define __MAPGENERIC_H

#include <vector>

class MapGeneric{
    public:
        std::vector<int> map(std::vector<int>);

    private:
        virtual int f(int x)=0;
};

#endif