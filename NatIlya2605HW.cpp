#include <iostream>
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
    Reservoir *res = new Reservoir[amountOfReservoires];
    //const int constAmountOfReservoires = amountOfReservoires;
    if (!isCreated)
    {
        isCreated = true;
    }
    string* name = new string[amountOfReservoires];
    double* length = new double[amountOfReservoires]; 
    double* width = new double[amountOfReservoires];
    double* depth = new double[amountOfReservoires];
    for (int i = 0; i < amountOfReservoires; i++)
    {
        cout << "Введите название водоёма: ";
        cin >> name[i];
        cout << "Введите длину водоёма(приблизительную): ";
        cin >> length[i];
        cout << "Введите ширину водоёма(приблизительную): ";
        cin >> width[i];
        cout << "Введите максимальную глубину водоёма(приблизительную): ";
        cin >> depth[i];
    }
    Reservoir res(name, length, width, depth);
    
}
