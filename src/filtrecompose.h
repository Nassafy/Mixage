/*
 * filtrecompose.h
 *
 *  Created on: 28 mars 2018
 *      Author: 16005920
 */

#ifndef SRC_FILTRECOMPOSE_H_
#define SRC_FILTRECOMPOSE_H_
#include <vector>
#include <consommateur.h>
#include "filtrebase.h"

class filtre_compose : public filtre_base {

private:
	std::vector<std::pair<std::shared_ptr<consommateur>, int>> m_vassociation;
protected:
	void addAssociation(std::shared_ptr<consommateur> comp, int n);
public:
	filtre_compose(int nbEntree, int nbSortie);

	virtual ~filtre_compose();

	void connecterEntree(const std::shared_ptr<flot> pflot, unsigned int n);

};

#endif /* SRC_FILTRECOMPOSE_H_ */
