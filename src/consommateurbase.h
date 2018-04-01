/*
 * consommateurbase.h
 *
 *  Created on: 22 mars 2018
 *      Author: 16005920
 */

#ifndef SRC_CONSOMMATEURBASE_H_
#define SRC_CONSOMMATEURBASE_H_
#include <consommateur.h>
#include <vector>

class consommateur_base : public virtual consommateur{

private:
	int m_nbentree;
	std::vector<std::shared_ptr<flot>> m_ventree;

public:
	consommateur_base(int nbentree);
	virtual ~consommateur_base();
	unsigned int nbEntrees() const;
	const std::shared_ptr<flot> & getEntree(unsigned int numentree) const;
	virtual void connecterEntree(const std::shared_ptr<flot> & f, unsigned int numentree);
	bool yaDesEchantillons() const;
	virtual void calculer() = 0;

};

#endif /* SRC_CONSOMMATEURBASE_H_ */
