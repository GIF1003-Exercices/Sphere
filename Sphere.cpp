/*
 * Sphere.cpp
 *
 *  Created on: Sep 24, 2020
 *      Author: etudiant
 */

#include <string>

#include "Sphere.h"
using namespace formes;

static double const MULT_VOLUME_SPHERE = 4.188790204786391;



Sphere::Sphere(double p_rayon)
{
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


