#include "functions.h"
#include <sstream>
#define PI 3.14159265

float sum(float x, float y)
{
    return x + y;
}

float diff(float x, float y)
{
    return x - y;
}

float multiP(float x, float y)
{
    return x * y;
}

float divs(float x, float y)
{
    return x / y;
}

void coutF(float x, float y, char oper, float z)
{
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << x << oper << y << " = " << z;
}

int menu_math()
{
    float x, y;
    char oper;
    while (true) {
        cout << "Доступные операции +,-,/,*,^" << endl;
        cout << "Пример ввода 10 + 5 " << endl;
        cout << "Введите пример: ";
        cin >> x >> oper >> y;
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