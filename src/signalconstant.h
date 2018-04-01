/*
 * signalconstant.h
 *
 *  Created on: 21 mars 2018
 *      Author: 16005920
 */

#ifndef SRC_SIGNALCONSTANT_H_
#define SRC_SIGNALCONSTANT_H_
#include <producteur.h>

class signal_constant : public producteur{

private:
	unsigned int m_nbsortie;
	std::shared_ptr<flot> m_pflot;
	double m_val;

public:
	signal_constant(double val);
	virtual ~signal_constant();

    unsigned int nbSorties() const;
    const std::shared_ptr<flot> & getSortie(unsigned int numsortie) const;
    void calculer();
};

#endif /* SRC_SIGNALCONSTANT_H_ */
