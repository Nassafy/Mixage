#include <volumecompose.h>
#include <signalconstant.h>
#include <multiplicateur.h>

volume_compose::volume_compose(double val)
:filtre_compose(1,1)
{
    // 0 -> Signal constant
    // 1 -> multiplicateur
    addComposant(std::shared_ptr<signal_constant>(new signal_constant(val)));
    addComposant(std::shared_ptr<multiplicateur>(new multiplicateur));
    std::shared_ptr<signal_constant> sign_const = std::dynamic_pointer_cast<signal_constant>(getComposant(0));
    std::shared_ptr<multiplicateur> mult = std::dynamic_pointer_cast<multiplicateur>(getComposant(1));
    mult->connecterEntree(sign_const->getSortie(0),0);
    addAssociation(mult, 1);
    connecterSortie(mult->getSortie(0), 0);

    addComposant(sign_const);
    addComposant(mult);

}

volume_compose::~volume_compose()
{}
