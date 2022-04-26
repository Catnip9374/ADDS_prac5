#include"ReduceGeneric.h"

class ReduceMinimum:public ReduceGeneric{

    public:
        int reduce(std::vector<int>);
    private:
         virtual int  binaryOperator(int x,int y){
             return x < y ? x : y;
         }
};