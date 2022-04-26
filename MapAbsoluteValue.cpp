#include"MapAbsoluteValue.h"


std::vector<int> MapAbsoluteValue::map(std::vector<int> a){
    std::vector<int> ans;
    for (int i = 0; i < a.size();++i){
        ans.push_back(f(a[i]));
    }
    return ans;
}