#include"ReduceMinimum.h"

int ReduceMinimum::reduce(std::vector<int> a){
    int ans=a[0];
    for (size_t i = 0; i < a.size();++i){
        ans = ReduceMinimum::binaryOperator(ans, a[i]);
    }
    return ans;
}