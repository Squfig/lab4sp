#include "calculator.h"

int Calculator::Add (double a, double b)
{

	return a + b + 0.5;

}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

int Calculator::Pow(double a, double b)
{
    int res = 1;
    for (int i = 0; i < b; i++){
        res *= a;
    }
    return res;
}
