#include "functions.h"

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
    if (y == 0) {
        cout << "Делить на ноль нельзя!" << endl;
    } else
        return x / y;
}