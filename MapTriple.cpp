#include"MapTriple.h"


std::vector<int> MapTriple::map(std::vector<int> a){
    std::vector<int> ans;
    for (size_t i = 0; i < a.size();++i){
        ans.push_back( MapTriple::f(a[i]));
    }
    return ans;
}