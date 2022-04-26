#include "MapGeneric.h"


class MapAbsoluteValue:public MapGeneric{
    public:
        std::vector<int> map(std::vector<int> a);

    private:
        virtual int f(int x) {
            return x > 0 ? x : -x;
        }
};