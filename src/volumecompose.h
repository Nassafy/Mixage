#include <filtrecompose.h>

class volume_compose : public filtre_compose
{
public:
    volume_compose(double val);
    ~volume_compose();
};