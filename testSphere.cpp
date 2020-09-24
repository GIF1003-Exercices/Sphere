/*
 * testSphere.cpp
 *
 *  Created on: Sep 24, 2020
 *      Author: etudiant
 */

#include "Sphere.h"
#include <iostream>

using namespace formes;

int main()
{
	Sphere sphereParDefaut(0);
	Sphere sphereRayon1(1);
	Sphere sphereRayon2(2);
	Sphere sphereRayon3(3);


	std::cout << "Sphère par défaut: " << std::endl;
	std::cout << "Rayon : " << sphereParDefaut.reqRayon() << std::endl;
	std::cout << "Volume : " << sphereParDefaut.volumeSphere() << std::endl;
	std::cout << "Volume Formate : " << sphereParDefaut.reqVolumeFormate() << std::endl;

	std::cout << "Sphère rayon 1: " << std::endl;
	std::cout << "Rayon : " << sphereRayon1.reqRayon() << std::endl;
	std::cout << "Volume : " << sphereRayon1.volumeSphere() << std::endl;
	std::cout << "Volume Formate : " << sphereRayon1.reqVolumeFormate() << std::endl;

	std::cout << "Sphère rayon 2: " << std::endl;
	std::cout << "Rayon : " << sphereRayon2.reqRayon() << std::endl;
	std::cout << "Volume : " << sphereRayon2.volumeSphere() << std::endl;
	std::cout << "Volume Formate : " << sphereRayon2.reqVolumeFormate() << std::endl;

	std::cout << "Sphère rayon 3: " << std::endl;
	std::cout << "Rayon : " << sphereRayon3.reqRayon() << std::endl;
	std::cout << "Volume : " << sphereRayon3.volumeSphere() << std::endl;
	std::cout << "Volume Formate : " << sphereRayon3.reqVolumeFormate() << std::endl;

}


