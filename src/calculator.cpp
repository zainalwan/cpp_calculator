#include <iostream>

#include "../header/calculator.h"

using namespace std;

Calculator::Calculator()
{
    cout << endl;
    cout << "|============================================================|\n";
    cout << "| Simple calculator program by Zain Alwan Wima Irfani.       |\n";
    cout << "| Written in C++ using object oriented programming paradigm. |\n";
    cout << "|============================================================|\n\n";

    cout << "1. Summation\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Devision\n";
    cout << "Choose operation > ";
    cin >> operation;
    cout << endl;
    
    cout << "Enter first number\n";
    cin >> firstNum;
    cout << endl;
    
    cout << "Enter second number\n";
    cin >> secondNum;
    cout << endl;

    cout << "Result = ";

    switch(operation)
    {
    case 1:
        cout << sum(firstNum, secondNum);
        break;

    case 2:
        cout << minus(firstNum, secondNum);
        break;

    case 3:
        cout << multiple(firstNum, secondNum);
        break;

    case 4:
        cout << devide(firstNum, secondNum);
        break;
    }

    cout << endl;
    cout << "Thank you.\n";
}

double Calculator::sum(double firstNum, double secondNum)
{
    return firstNum + secondNum;
}

double Calculator::minus(double firstNum, double secondNum)
{
    return firstNum - secondNum;
}

double Calculator::multiple(double firstNum, double secondNum)
{
    return firstNum * secondNum;
}

double Calculator::devide(double firstNum, double secondNum)
{
    return firstNum / secondNum;
}
