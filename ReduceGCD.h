#include"ReduceGeneric.h"

class ReduceGCD:public ReduceGeneric{

    public:
        int reduce(std::vector<int>);
    private:
         virtual int  binaryOperator(int x,int y){
             while(x != y){
                    if(x > y) //如果n1>n2，n1是大的数
                        x -=y;//就n1-n2，赋值给n1
                    else//否则(n1<n2，n2是大的数)
                        y -= x;//n2-n1，赋值给n2
            }
                 return x;
         }
        
};