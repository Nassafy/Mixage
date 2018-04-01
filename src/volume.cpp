/*
 * volume.cpp
 *
 *  Created on: 27 mars 2018
 *      Author: 16005920
 */

#include "volume.h"

volume::volume(double vol)
:filtre_base(1,1), m_vol(vol)
{
	m_mult.connecterEntree(m_vol.getSortie(0),0);
	connecterSortie(m_mult.getSortie(0),0);
}

volume::~volume() {
	// TODO Auto-generated destructor stub
}

void volume::calculer()
{
	m_vol.calculer();
	m_mult.calculer();
}

void volume::connecterEntree(const std::shared_ptr<flot> pflot,
		unsigned int n) {
	consommateur_base::connecterEntree(pflot, n);
	m_mult.connecterEntree(getEntree(n),1);

}
