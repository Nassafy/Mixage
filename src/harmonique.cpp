/*
 * harmonique.cpp
 *
 *  Created on: 21 mars 2018
 *      Author: 16005920
 */

#include "harmonique.h"
#include "impflot.h"
#include "math.h"
#include "constantes.h"

using namespace MixageSonore;

harmonique::harmonique(int freq, float dephasage)
:producteur_base(1), m_i(0), m_f(freq), m_dephasage(dephasage)
{

}

harmonique::~harmonique()
{
	// TODO Auto-generated destructor stub
}

void harmonique::calculer()
{
	double echantillon = sin(((double)m_i / frequency) * 2.0f * pi * (double)m_f + m_dephasage);
	getSortie(0)->inserer(echantillon);
	m_i++;
}
