#include <iostream>
#include <string>
#include "Reservoir.h"
using namespace std;

Reservoir::Reservoir()
{
	nameOfReservoir = "";
	volumeOfReservoir = 0;
	surfaceArea = 0;
}


Reservoir::Reservoir(const string* name, double length, double width, double depth)
{
	setNameOfReservoir(name);
	setVolumeOfReservoir(length, width, depth);
	setSurfaceArea(length, width);
}

void Reservoir::setNameOfReservoir(const string* name)
{
	nameOfReservoir = name;
}

void Reservoir::setVolumeOfReservoir(double length, double width, double depth)
{
	volumeOfReservoir = length * width * depth;
}

void Reservoir::setSurfaceArea(double length, double width)
{
	surfaceArea = length * width;
}