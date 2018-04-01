/*
 * volume.h
 *
 *  Created on: 27 mars 2018
 *      Author: 16005920
 */

#ifndef SRC_VOLUME_H_
#define SRC_VOLUME_H_

#include "filtrebase.h"
#include "signalconstant.h"
#include "operationbinaire.h"

class volume: public filtre_base {
private:
	signal_constant m_vol;
	operation_binaire<std::multiplies<double>> m_mult;
public:
	volume(double vol);
	virtual ~volume();
	void calculer();
	void connecterEntree(const std::shared_ptr<flot> pflot, unsigned int n);
};

#endif /* SRC_VOLUME_H_ */
