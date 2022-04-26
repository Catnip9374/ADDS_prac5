#include "MapGeneric.h"


class MapTriple:public MapGeneric{
    public:
        std::vector<int> map(std::vector<int> a);

    private:
        virtual int f(int x) {
            return 3 * x;
        }
};