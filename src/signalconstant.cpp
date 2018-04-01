/*
 * signalconstant.cpp
 *
 *  Created on: 21 mars 2018
 *      Author: 16005920
 */

#include "signalconstant.h"
#include "impflot.h"
#include <cassert>

signal_constant::signal_constant(double val)
:m_nbsortie(1), m_pflot(new imp_flot()), m_val(val)
{
}

signal_constant::~signal_constant() {
	// TODO Auto-generated destructor stub
}

unsigned int signal_constant::nbSorties() const {
	return m_nbsortie;
}

const std::shared_ptr<flot>& signal_constant::getSortie(
		unsigned int numsortie) const
{
	assert(numsortie == 0);
	return m_pflot;
}

void signal_constant::calculer()
{
	m_pflot->inserer(m_val);
}
