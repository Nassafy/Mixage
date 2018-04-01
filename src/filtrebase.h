/*
 * filtrebase.h
 *
 *  Created on: 22 mars 2018
 *      Author: 16005920
 */

#ifndef SRC_FILTREBASE_H_
#define SRC_FILTREBASE_H_
#include <filtre.h>
#include "producteurbase.h"
#include "consommateurbase.h"

class filtre_base :public consommateur_base, public producteur_base {
private:
	int m_nbentree;
	int m_nbsortie;

public:
	filtre_base(int nb_entree, int nb_sortie);
	virtual ~filtre_base();
	virtual void calculer() = 0;
	bool yaDesEchantillons();
//	const std::shared_ptr<flot> & getSortie(unsigned int numsortie) const;
//	const std::shared_ptr<flot> & getEntree(unsigned int numEntree) const;
	//int nbSortie();
//	int nbEntree();
};

#endif /* SRC_FILTREBASE_H_ */
