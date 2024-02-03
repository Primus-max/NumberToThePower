// Напишите программу, которая запрашивает два целых числа
// x и y, после чего вычисляет и выводит значение x в степени y.

#include <iostream>
#include <windows.h>
using namespace std;

/// <summary>
/// Метод возведения X в степень Y
/// </summary>
/// <param name="x"></param>
/// <param name="y"></param>
/// <returns>int X возведённое в степень Y</returns>
int CalcPower(int x, int y)
{
    int result = 1;

    for (int i = 0; i < y; i++)
        result *= x;

    return result;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int X, Y;

    cout << "Чтобы возвести X в степень Y введите X и Y : ";
    cin >> X >> Y;

    int result =   CalcPower(X, Y);

    cout << X << " в степени " << Y << " = " << result;
}
