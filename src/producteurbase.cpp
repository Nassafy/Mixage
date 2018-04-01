/*
 * producteurbase.cpp
 *
 *  Created on: 21 mars 2018
 *      Author: 16005920
 */

#include "producteurbase.h"
#include <cassert>
#include "impflot.h"

producteur_base::producteur_base(int nb_flot)
:m_nbsortie(nb_flot)
{
	for(int i =0; i < nb_flot; i++)
	{
		std::shared_ptr<flot> pflot = std::shared_ptr<flot>(new imp_flot);
		m_vflot.push_back(pflot);
	}

}

producteur_base::~producteur_base()
{
}

unsigned int producteur_base::nbSorties() const
{
	return m_nbsortie;
}

const std::shared_ptr<flot>& producteur_base::getSortie(
		unsigned int numsortie) const
{
	assert(numsortie < m_nbsortie);
	return m_vflot[numsortie];
}

void producteur_base::connecterSortie(const std::shared_ptr<flot> & p_flot,
		int numSortie)
{
	m_vflot[numSortie] = p_flot;
}
