/*
 * multiplicateur.h
 *
 *  Created on: 22 mars 2018
 *      Author: 16005920
 */

#ifndef SRC_MULTIPLICATEUR_H_
#define SRC_MULTIPLICATEUR_H_
#include "filtrebase.h"

class multiplicateur : public filtre_base {
public:
	multiplicateur();
	virtual ~multiplicateur();
	void calculer();
};

#endif /* SRC_MULTIPLICATEUR_H_ */
