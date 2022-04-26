#include"FilterForTwoDigitPositive.h"

std::vector<int> FilterForTwoDigitPositive::filter(std::vector<int>a){
    std::vector<int> ans;
    for (size_t i = 0; i < a.size();++i){
        if(FilterForTwoDigitPositive::g(a[i])){
            ans.push_back(a[i]);
        }
    }
    return ans;
}