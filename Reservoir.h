#pragma once
#include <string>
using namespace std;

class Reservoir
{
	string nameOfReservoir; // Имя водоёма.
	double volumeOfReservoir; // Объём водоёма.
	double surfaceArea; // Площадь водяной поверхности водоёма.
public:
	Reservoir(); // Конструктор  поп умолчанию.
	Reservoir(string* name, double length, double width, double depth); // Конструктор с параметрами.

	void setNameOfReservoir(string* nameOfReservoir); // Установка имени водоёма.
	void setVolumeOfReservoir(double length, double width, double depth); // Установка объёма водоёма.
	void setSurfaceArea(double length, double width); // Установка площади поверхности водоёма.
	string getNameOfReservoir() // Возвращает имя водоёма.
	{
		return nameOfReservoir;
	}
	double getVolumeOfResorvoir() // Возвращает объём водоёма.
	{
		return volumeOfReservoir;
	}
	double getSurfaceArea() // Возвращает площадь водяной поверхности водоёма.
	{
		return surfaceArea;
	}	
};

