/*
 * consommateurbase.cpp
 *
 *  Created on: 22 mars 2018
 *      Author: 16005920
 */

#include "consommateurbase.h"
#include "impflot.h"

consommateur_base::consommateur_base(int nbentree)
:m_nbentree(nbentree)
{
	for(int i = 0; i < nbentree; i++)
	{
		std::shared_ptr<flot> p_flot;
		m_ventree.push_back(p_flot);
	}
}

consommateur_base::~consommateur_base()
{
	// TODO Auto-generated destructor stub
}

unsigned int consommateur_base::nbEntrees() const
{
	return m_nbentree;
}

const std::shared_ptr<flot>& consommateur_base::getEntree(
		unsigned int numentree) const
{
	return m_ventree[numentree];
}

void consommateur_base::connecterEntree(const std::shared_ptr<flot>& f,
		unsigned int numentree)
{
	m_ventree[numentree] = f;
}

bool consommateur_base::yaDesEchantillons() const
{
	for(unsigned int i = 0; i < m_ventree.size(); i++)
	{
		if(m_ventree[i]->vide())
		{
			return false;
		}
	}
	return true;
}
