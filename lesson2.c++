/* Калькулятор для вычисления 2 чисел */

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    double a, b;
    char operation;

    cout << "Введите в поле ввода строку в виде: число операция число" << endl;
    cin >> a >> operation >> b;

    double result;

    switch(operation) {
        case '+': result = a+b; break;
        case '-': result = a-b; break;
        case '*': result = a*b; break;
        case '/': result = a/b; break;
        default : result = 0;
    }

    cout << a << " " << operation << " " << b << " = " << result << endl;

    return 0;
}
