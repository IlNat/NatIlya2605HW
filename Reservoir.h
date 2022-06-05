#pragma once
#include <string>
using namespace std;

class Reservoir
{
	string nameOfReservoir;
	double volumeOfReservoir;
	double surfaceArea;
public:
	Reservoir();
	Reservoir(string name, double length, double width, double depth);

	void setNameOfReservoir(string nameOfReservoir);
	void setVolumeOfReservoir(double length, double width, double depth);
	void setSurfaceArea(double length, double width);
	string getNameOfReservoir()
	{
		return nameOfReservoir;
	}
	double getSurfaceArea()
	{
		return surfaceArea;
	}
	double getVolumeOfResorvoir()
	{
		return volumeOfReservoir;
	}
};

