#include"MapSquare.h"


std::vector<int> MapSquare::map(std::vector<int> a){
    std::vector<int> ans;
    for (int i = 0; i < a.size();++i){
        ans.push_back(f(a[i]));
    }
    return ans;
}