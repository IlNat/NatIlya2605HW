#include <iostream>
#include <string>
#include "Windows.h"
#include "Reservoir.h"
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Hello World!\n";
    cout << "Добро пожаловать в программу заполнения информации об водоёме.\n";
    int amountOfReservoires;
    bool isCreated;
    cout << "Введите количество водоёмов: ";
    cin >> amountOfReservoires;

    if (!isCreated)
    {
        isCreated = true;
    }
    string* createdNames = new string[amountOfReservoires];
    double* createdLengths = new double[amountOfReservoires]; 
    double* createdWidths = new double[amountOfReservoires];
    double* createdDepths = new double[amountOfReservoires];
    for (int i = 0; i < amountOfReservoires; i++) {
        cout << "Введите название " << i << "-го водоёма: ";
        cin >> createdNames[i];
        cout << "Введите длину " << i << "-го водоёма(приблизительную): ";
        cin >> createdLengths[i];
        cout << "Введите ширину " << i << "-го водоёма(приблизительную): ";
        cin >> createdWidths[i];
        cout << "Введите максимальную глубину " << i << "-го водоёма(приблизительную): ";
        cin >> createdDepths[i];
    }

    Reservoir res(createdNames, createdLengths, createdWidths, createdDepths);
    //Reservoir *res = new Reservoir[amountOfReservoires];
}
