#include"ReduceGCD.h"

int ReduceGCD::reduce(std::vector<int> a){
    int ans=a[0];
    for (size_t i =1; i < a.size();++i){
        ans = ReduceGCD::binaryOperator(ans, a[i]);
    }
    return ans;
}