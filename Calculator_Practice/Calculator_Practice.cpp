// Calculator_Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

int main()
{
    double x;
    double y;
    double result;
    char oper;

    std::cout << "Calculator Console Application" << std::endl << std::endl;
    std::cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
        << std::endl;

    Calculator c;
    while (true)
    {
        std::cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            std::cout << "Attempted to divide by zero!" << std::endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
        std::cout << "Result " << x << oper << y << " is:" << result << std::endl;
    }
    return 0;
}
