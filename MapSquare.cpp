#include"MapSquare.h"


std::vector<int> MapSquare::map(std::vector<int> a){
    std::vector<int> ans;
    for (size_t i = 0; i < a.size();++i){
        ans.push_back(MapSquare::f(a[i]));
    }
    return ans;
}