#include <iostream>

int main()
{
    double firstVar, secondVar;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> firstVar;
    std::cout << "Enter second number: ";
    std::cin >> secondVar;
    std::cout << "Enter operation : ";
    std::cin >> operation;

    switch (operation) {
    case '-':
        std::cout << firstVar << "-" << secondVar << "=" << firstVar - secondVar << '\n';
        break;
    case '+':
        std::cout << firstVar << "+" << secondVar << "=" << firstVar + secondVar << '\n';
        break;
    case '*':
        std::cout << firstVar << "*" << secondVar << "=" << firstVar * secondVar << '\n';
        break;
    case '/':
        std::cout << firstVar << "/" << secondVar << "=" << firstVar / secondVar << '\n';
        break;
    case '^':
        std::cout << firstVar << "^" << secondVar << "=" << std::pow(firstVar, secondVar) << '\n';
        break;
    default:
        std::cout << "Error operation\n";
    }
    return 0;
}

