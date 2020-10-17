#include "functions.h"
#include <sstream>
#define PI 3.14159265

void coutF(float x, float y, char oper, float z)
{
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << x << oper << y << " = " << z;
}

/// <summary>
/// Сумма двух числе
/// </summary>
/// <param name="x"> 1 слфгаемое </param>
/// <param name="y"> 2 слфгаемое </param>
/// <returns> сумма двух чисел </returns>
float sum(float x, float y)
{
    return x + y;
}

/// <summary>
/// Разность двух чисел
/// </summary>
/// <returns> Разность </returns>
float diff(float x, float y)
{
    return x - y;
}

/// <summary>
/// Умножение
/// </summary>
/// <returns></returns>
float multiP(float x, float y)
{
    return x * y;
}

/// <summary>
/// Частное
/// </summary>
/// <returns></returns>
float divs(float x, float y)
{
    return x / y;
}

/// <summary>
/// Факториал
/// </summary>
/// <returns></returns>
int fact(int x)
{
    if (x == 0)
        return 1;
    else
        return x * fact(x - 1);
}

/// <summary>
/// Меню простых функций
/// </summary>
/// <returns></returns>
int menu_math()
{
    float x, y;
    char oper;
    while (true) {
        cout << "Доступные операции +,-,/,*,^,!" << endl;
        cout << "Пример ввода 10 + 5 " << endl;
        cout << "Введите пример: ";
        cin >> x;
        cin >> oper;
        if (oper != '!')
            cin >> y;
        switch (oper) {
        case '*':
            coutF(x, y, oper, multiP(x, y));
            break;
        case '+':
            coutF(x, y, oper, sum(x, y));
            break;
        case '/':
            coutF(x, y, oper, divs(x, y));
            break;
        case '-':
            coutF(x, y, oper, diff(x, y));
            break;
        case '^':
            coutF(x, y, oper, pow(x, y));
            break;
        case '!':
            cout << x << "! =" << fact(x);
            break;
        default:
            cout << "Не верная команда!" << endl;
            break;
        }

        cout << "\n Повторить? y/n" << endl;
        cin >> oper;

        if (oper == 'n')
            break;
        system("cls");
    }
    return 0;
}

/// <summary>
/// Меню тригигонометрических функций
/// </summary>
/// <returns></returns>
int menu_trig()
{
    float x;
    string oper;

    while (true) {
        cout << "Доступные операции soc/sin/tg " << endl;
        cout << "Пример ввода cos 10" << endl;
        cout << "Введите пример: ";
        cin >> oper >> x;

        if (oper == "sin")
            cout << sin(x * PI / 180);
        else if (oper == "cos")
            cout << cos(x * PI / 180);
        else if (oper == "tg")
            cout << tan(x * PI / 180);
        else
            cout << "Не верная команда!" << endl;

        cout << "\n Повторить? y/n" << endl;
        cin >> oper;

        if (oper == "n")
            break;
        system("cls");
    }
    return 0;
}