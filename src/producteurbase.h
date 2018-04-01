/*
 * producteurbase.h
 *
 *  Created on: 21 mars 2018
 *      Author: 16005920
 */

#ifndef SRC_PRODUCTEURBASE_H_
#define SRC_PRODUCTEURBASE_H_
#include <producteur.h>
#include <vector>

class producteur_base : public virtual producteur {

private:
	unsigned int m_nbsortie;
	std::vector<std::shared_ptr<flot>> m_vflot;

protected:
	void connecterSortie(const std::shared_ptr<flot> & f, int numSortie);
public:
	producteur_base(int nb_flot);
	virtual ~producteur_base();

	unsigned int nbSorties() const;
	const std::shared_ptr<flot> & getSortie(unsigned int numsortie) const;

	void calculer() = 0;
};

#endif /* SRC_PRODUCTEURBASE_H_ */
