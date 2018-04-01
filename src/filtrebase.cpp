/*
 * filtrebase.cpp
 *
 *  Created on: 22 mars 2018
 *      Author: 16005920
 */

#include "filtrebase.h"


filtre_base::filtre_base(int nb_entree, int nb_sortie)
:consommateur_base(nb_entree), producteur_base(nb_sortie), m_nbentree(nb_entree), m_nbsortie(nb_sortie)
{
}

filtre_base::~filtre_base()
{
	// TODO Auto-generated destructor stub
}

bool filtre_base::yaDesEchantillons()
{
	for(int i = 0; i < m_nbentree; i++)
	{
		if(consommateur_base::getEntree(i)->vide())
		{
			return false;
		}
	}
	return true;
}

//const std::shared_ptr<flot>& filtre_base::getSortie(
//		unsigned int numsortie) const
//{
//	return producteur_base::getSortie(numsortie);
//}
//
//const std::shared_ptr<flot>& filtre_base::getEntree(
//		unsigned int numEntree) const
//{
//	return consommateur_base::getEntree(numEntree);
//}
//
//int filtre_base::nbSortie()
//{
//	return producteur_base::nbSorties();
//}
//
//int filtre_base::nbEntree()
//{
//	return  consommateur_base::nbEntrees();
//}
