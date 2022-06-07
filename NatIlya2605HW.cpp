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
    cout << "Добро пожаловать в программу заполнения информации об водоёмах.\n";
    string name1; 
    double length1, width1, depth1;
    string name2; 
    double length2, width2, depth2;
    //Ввод данных.
    cout << "Введите название первого водоёма: ";
    cin >> name1;   
    cout << "Введите длину первого водоёма: ";
    cin >> length1;    
    cout << "Введите ширину первого водоёма(приблизительную): ";
    cin >> width1;    
    cout << "Введите маскимальную глубину первого водоёма(приблизительную): ";
    cin >> depth1;
    cout << "Введите название второго водоёма: ";
    cin >> name2;
    cout << "Введите длину второго водоёма(приблизительную): ";
    cin >> length2;
    cout << "Введите ширину второго водоёма(приблизительную): ";
    cin >> width2;
    cout << "Введите максимальную глубину второго водоёма(приблизительную): ";
    cin >> depth2;   

    //Обработка данных в конструкторах.
    Reservoir reservoir1(name1, length1, width1, depth1);
    Reservoir reservoir2(name2, length2, width2, depth2);    
}
