#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Калькулятор. Что делать?"<<endl;
    cout << "Введите операцию (+, -, *, /): ";
    char op;
    int a, b;
    cin >> op;
    switch (op) {
    case '+':
        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите второе число число: ";
        cin >> b;
        cout << "Результат: " << a + b;
        break;
    case '-':
        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите второе число число: ";
        cin >> b;
        cout << "Результат: " << a - b;
        break;
    case '*':
        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите второе число число: ";
        cin >> b;
        cout << "Результат: " << a * b;
        break;
    case '/':
        cout << "Введите первое число: ";
        cin >> a;
        cout << "Введите второе число число: ";
        cin >> b;
        cout << "Результат: " << a / b;
        break;
    }
}
