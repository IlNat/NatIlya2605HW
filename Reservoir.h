#pragma once
#include <iostream>
#include <string>
using namespace std;

class Reservoir
{
	string nameOfReservoir; // Имя водоёма.
	double volumeOfReservoir; // Объём водоёма.
	double surfaceArea; // Площадь водяной поверхности водоёма.
public:
	// Конструктор с параметрами.
	Reservoir(string name, double length, double width, double depth) : nameOfReservoir{ name }, volumeOfReservoir{ length * width * depth }, surfaceArea{ length * width } 
	{
		cout << "Водоём " << getNameOfReservoir() << ":\n";
		cout << "Объём водоёма: " << getVolumeOfResorvoir() << '\n';
		cout << "Площадь поверхности: " << getSurfaceArea() << '\n';
	} 

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

