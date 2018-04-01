/*
 * filtrecompose.cpp
 *
 *  Created on: 28 mars 2018
 *      Author: 16005920
 */

#include "filtrecompose.h"


filtre_compose::filtre_compose(int nbEntree, int nbSortie)
:filtre_base(nbEntree, nbSortie)
{

}

filtre_compose::~filtre_compose() 
{
}

void filtre_compose::addAssociation(std::shared_ptr<consommateur> comp, int n)
{
	std::pair<std::shared_ptr<consommateur>, int> p(comp, n);
	m_vassociation.push_back(p);
}

void filtre_compose::connecterEntree(const std::shared_ptr<flot> pflot,
		unsigned int n)
{
	std::pair<std::shared_ptr<consommateur>, int> p = m_vassociation[n];
	consommateur_base::connecterEntree(pflot, n);
	p.first->connecterEntree(getEntree(n), p.second);
}

void filtre_compose::calculer()
{
	for(int i = 0; i < m_vcomposant.size(); i++)
	{
		m_vcomposant[i]->calculer();
	}
}

void filtre_compose::addComposant(std::shared_ptr<composant> comp)
{ 
	m_vcomposant.push_back(comp);
}