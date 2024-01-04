#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;

    double a = 5.0;
    double b = 3.0;

    int var1 = calc.Add(a, b);
    int var2 = calc.Sub(a, b);
		int var3 = calc.Mul(a, b);
		int var4 = calc.Pow(a, b);

    std::cout <<"Add("<< a << ", "<< b <<") = " << var1 << std::endl;
    std::cout <<"Sub("<< a << ", "<< b <<") = " << var2 << std::endl;
		std::cout <<"Mul("<< a << ", "<< b <<") = " << var3 << std::endl;
		std::cout <<"Pow("<< a << ", "<< b <<") = " << var4 << std::endl;

    return 0;
}
