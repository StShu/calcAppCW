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
/// ����� ���� �����
/// </summary>
/// <param name="x"> 1 ��������� </param>
/// <param name="y"> 2 ��������� </param>
/// <returns> ����� ���� ����� </returns>
float sum(float x, float y)
{
    return x + y;
}

/// <summary>
/// �������� ���� �����
/// </summary>
/// <returns> �������� </returns>
float diff(float x, float y)
{
    return x - y;
}

/// <summary>
/// ���������
/// </summary>
/// <returns></returns>
float multiP(float x, float y)
{
    return x * y;
}

/// <summary>
/// �������
/// </summary>
/// <returns></returns>
float divs(float x, float y)
{
    return x / y;
}

/// <summary>
/// ���������
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
/// ���� ������� �������
/// </summary>
/// <returns></returns>
int menu_math()
{
    float x, y;
    char oper;
    while (true) {
        cout << "��������� �������� +,-,/,*,^,!" << endl;
        cout << "������ ����� 10 + 5 " << endl;
        cout << "������� ������: ";
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
            cout << "�� ������ �������!" << endl;
            break;
        }

        cout << "\n ���������? y/n" << endl;
        cin >> oper;

        if (oper == 'n')
            break;
        system("cls");
    }
    return 0;
}

/// <summary>
/// ���� �������������������� �������
/// </summary>
/// <returns></returns>
int menu_trig()
{
    float x;
    string oper;

    while (true) {
        cout << "��������� �������� soc/sin/tg " << endl;
        cout << "������ ����� cos 10" << endl;
        cout << "������� ������: ";
        cin >> oper >> x;

        if (oper == "sin")
            cout << sin(x * PI / 180);
        else if (oper == "cos")
            cout << cos(x * PI / 180);
        else if (oper == "tg")
            cout << tan(x * PI / 180);
        else
            cout << "�� ������ �������!" << endl;

        cout << "\n ���������? y/n" << endl;
        cin >> oper;

        if (oper == "n")
            break;
        system("cls");
    }
    return 0;
}