#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");

    float x, y;
    cin >> x >> y;
    cout << sum(x, y) << endl;
    cout << divs(x, y) << endl;
    cout << multiP(x, y) << endl;
   cout << diff(x, y) << endl;
}