#pragma once
#include <iostream>
#include <string>
using namespace std;

class Reservoir
{
	string nameOfReservoir; // ��� ������.
	double volumeOfReservoir; // ����� ������.
	double surfaceArea; // ������� ������� ����������� ������.
public:
	// ����������� � �����������.
	Reservoir(string name, double length, double width, double depth) : nameOfReservoir{ name }, volumeOfReservoir{ length * width * depth }, surfaceArea{ length * width } 
	{
		cout << "����� " << getNameOfReservoir() << ":\n";
		cout << "����� ������: " << getVolumeOfResorvoir() << '\n';
		cout << "������� �����������: " << getSurfaceArea() << '\n';
	} 

	string getNameOfReservoir() // ���������� ��� ������.
	{
		return nameOfReservoir;
	}
	double getVolumeOfResorvoir() // ���������� ����� ������.
	{
		return volumeOfReservoir;
	}
	double getSurfaceArea() // ���������� ������� ������� ����������� ������.
	{
		return surfaceArea;
	}	
};

