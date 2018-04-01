/*
 * harmonique.h
 *
 *  Created on: 21 mars 2018
 *      Author: 16005920
 */

#ifndef SRC_HARMONIQUE_H_
#define SRC_HARMONIQUE_H_
#include "producteurbase.h"


class harmonique : public producteur_base {
private:
	int m_i;
	int m_f;
	float m_dephasage;

public:
	harmonique(int freq, float dephasage = 0);
	virtual ~harmonique();
	void calculer();
};

#endif /* SRC_HARMONIQUE_H_ */
