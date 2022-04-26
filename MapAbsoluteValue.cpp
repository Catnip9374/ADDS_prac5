#include"MapAbsoluteValue.h"


std::vector<int> MapAbsoluteValue::map(std::vector<int> a){
    std::vector<int> ans;
    for (size_t i = 0; i < a.size();++i){
        ans.push_back(MapAbsoluteValue::f(a[i]));
    }
    return ans;
}