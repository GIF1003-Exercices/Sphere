/*
 * Sphere.h
 *
 *  Created on: Sep 24, 2020
 *      Author: etudiant
 */

#ifndef SPHERE_H_
#define SPHERE_H_

#include <string>

namespace formes
{

class Sphere
{
public:

	Sphere();
	Sphere(const double p_rayon = 0);
	double reqRayon() const;
	double volumeSphere() const;
	std::string reqVolumeFormate() const;

private:

	double m_rayon;
};

}

#endif /* SPHERE_H_ */
