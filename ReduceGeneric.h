#ifndef __REDUCEGENERIC_H
#define __REDUCEGENERIC_H

#include <vector>

class ReduceGeneric{
    public:
        int reduce(std::vector<int>);

    private:
        virtual int  binaryOperator(int ,int)=0;
};

#endif