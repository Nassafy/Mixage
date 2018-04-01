/*
 * impflot.cpp
 *
 *  Created on: 21 mars 2018
 *      Author: 16005920
 */

#include "impflot.h"
#include <cassert>
imp_flot::imp_flot()
{
	// TODO Auto-generated constructor stub

}

imp_flot::~imp_flot()
{
	// TODO Auto-generated destructor stub
}

double imp_flot::extraire()
{
	assert(!m_deque.empty());
	double echantillon = m_deque.front();
	m_deque.pop_front();
	return echantillon;
}

void imp_flot::inserer(double echantillon)
{
	m_deque.push_back(echantillon);
}

bool imp_flot::vide() const
{
	return m_deque.empty();
}
