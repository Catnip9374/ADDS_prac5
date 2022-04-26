#include "MapGeneric.h"


class MapSquare:public MapGeneric{
    public:
        std::vector<int> map(std::vector<int> a);

    private:
        virtual int f(int x) {
            return x*x;
        }
};