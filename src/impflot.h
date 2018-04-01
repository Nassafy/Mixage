/*
 * impflot.h
 *
 *  Created on: 21 mars 2018
 *      Author: 16005920
 */

#ifndef IMPFLOT_H_
#define IMPFLOT_H_
#include <flot.h>
#include <deque>

class imp_flot : public flot{

private:
	std::deque<double> m_deque;
public:
	imp_flot();
	virtual ~imp_flot();
	double extraire();
	void inserer(double echantillon);
	bool vide() const;
};

#endif /* IMPFLOT_H_ */
