#pragma once
#include <string>
using namespace std;

class Reservoir
{
	string nameOfReservoir;
	double volumeOfReservoir;
	double surfaceArea;
	string operator=(string name) { nameOfReservoir = name; return nameOfReservoir; }
public:
	Reservoir();
	Reservoir(const string* name, double length, double width, double depth);

	void setNameOfReservoir(const string* nameOfReservoir);
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

