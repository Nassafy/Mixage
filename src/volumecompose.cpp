#include <volumecompose.h>
#include <signalconstant.h>
#include <multiplicateur.h>

volume_compose::volume_compose(double val)
:filtre_compose(2,1)
{
    std::shared_ptr<signal_constant> sign_const(new signal_constant(val));
    std::shared_ptr<multiplicateur> mult(new multiplicateur);
    
    mult->connecterEntree(sign_const->getSortie(0),0);
    addAssociation(mult, 1);
    connecterSortie(mult->getSortie(0), 0);

    addComposant(sign_const);
    addComposant(mult);

}

volume_compose::~volume_compose()
{}