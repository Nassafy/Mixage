/*
 * operationbinaire.h
 *
 *  Created on: 27 mars 2018
 *      Author: 16005920
 */

#ifndef SRC_OPERATIONBINAIRE_H_
#define SRC_OPERATIONBINAIRE_H_

#include "filtrebase.h"

template <class T>
class operation_binaire: public filtre_base {
private:
	T m_op;
public:
	operation_binaire()
:filtre_base(2,1)
{};
	virtual ~operation_binaire(){}
	void calculer()
	{
		{
			if(!consommateur_base::getEntree(0)->vide() && !consommateur_base::getEntree(1)->vide())
			{
				double s = m_op(consommateur_base::getEntree(0)->extraire(), consommateur_base::getEntree(1)->extraire());
				producteur_base::getSortie(0)->inserer(s);
			}
		}
	}
};

#endif /* SRC_OPERATIONBINAIRE_H_ */
