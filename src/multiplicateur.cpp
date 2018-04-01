/*
 * multiplicateur.cpp
 *
 *  Created on: 22 mars 2018
 *      Author: 16005920
 */

#include "multiplicateur.h"

multiplicateur::multiplicateur()
:filtre_base(2,1)
{

	// TODO Auto-generated constructor stub

}

multiplicateur::~multiplicateur()
{
	// TODO Auto-generated destructor stub
}

void multiplicateur::calculer()
{
	if(!consommateur_base::getEntree(0)->vide() && !consommateur_base::getEntree(1)->vide())
	{
		double s = consommateur_base::getEntree(0)->extraire() * consommateur_base::getEntree(1)->extraire();
		producteur_base::getSortie(0)->inserer(s);
	}
}

