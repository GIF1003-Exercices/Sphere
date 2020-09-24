/*
 * Sphere.cpp
 *
 *  Created on: Sep 24, 2020
 *      Author: etudiant
 */

#include <string>
#include <iostream>
#include <cassert>

#include "Sphere.h"
using namespace formes;

static double const MULT_VOLUME_SPHERE = 4.188790204786391;

Sphere::Sphere()
{
	std::cout << "Ceci est le constructeur par défaut." << std::endl;
	m_rayon = 0;
}

Sphere::Sphere(const double p_rayon)
{
	    std::cout << "Ceci est le constructeur à un argument." << std::endl;
	    assert(p_rayon >= 0);
		m_rayon = p_rayon;
}

double Sphere::reqRayon() const
{
	return m_rayon;
}

double Sphere::volumeSphere() const
{
	return (MULT_VOLUME_SPHERE * m_rayon * m_rayon * m_rayon );
}

std::string Sphere::reqVolumeFormate() const
{
	return std::to_string(this->volumeSphere());
}

void Sphere::experienceBizarre() const
{
	std::cout << "Ceci est une expérience bizarre." << std::endl;
}


