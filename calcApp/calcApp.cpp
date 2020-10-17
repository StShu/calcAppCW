#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    char oper;
    while (true) {
        cout << "1 - Обычные функций\n2 - Тригонометрические функции 0 - Выход"
             << endl;
        cout << "Введите номер : ";
        cin >> oper;
        switch (oper) {
        case '1':
            system("cls");
            menu_math();
            break;
        case '2':
            system("cls");
            break;
        case '0':
            return 0;
            break;
        default:
            cout << "Не верный выбор !" << endl;
            break;
        }
        system("cls");
        cout << "Повторить выбор функций? y/n" << endl;
        cin >> oper;
        if (oper == 'n')
            return 0;
    }
}