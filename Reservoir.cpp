#include <iostream>
#include <string>
#include "Reservoir.h"
using namespace std;

//Конструктор по умолчанию.
Reservoir::Reservoir()
{
	nameOfReservoir = "";
	volumeOfReservoir = 0;
	surfaceArea = 0;
}

//Конструктор с параметрами.
Reservoir::Reservoir(string name, double length, double width, double depth)
{
	setNameOfReservoir(name);
	setVolumeOfReservoir(length, width, depth);
	setSurfaceArea(length, width);
}

//Установка имени водоёма.
void Reservoir::setNameOfReservoir(string name)
{
	nameOfReservoir = name;
}

//Установка объёма водоёма.
void Reservoir::setVolumeOfReservoir(double length, double width, double depth)
{
	volumeOfReservoir = length * width * depth;
}

//Установка площади водяной поверхности водоёма.
void Reservoir::setSurfaceArea(double length, double width)
{
	surfaceArea = length * width;
}