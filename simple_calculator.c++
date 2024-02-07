#include <iostream>

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "*************** CALCULATOR ***************\n";

    std::cout << "Enter either (+ - * /)\n";
    std::cin >> op;

    std::cout << "Enter num1\n";
    std::cin >> num1;

    std::cout << "Enter num2\n";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "result : " << result << '\n';
        break;

    case '-':
        result = num1 - num2;
        std::cout << "result : " << result << '\n';
        break;

    case '*':
        result = num1 * num2;
        std::cout << "result : " << result << '\n';
        break;

    case '/':
        result = num1 / num2;
        std::cout << "result : " << result << '\n';
        break;

    default:
        std::cout << "Error! Invalid operator. Please enter (+ - * /).\n";
        break;
    }

    std::cout << "******************************************";

    return 0;
}