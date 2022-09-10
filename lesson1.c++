/* Калькулятор для вычисления 2 чисел, с выводом суммы, разности, произведения и частного сразу */

#include <iostream>

using namespace std;

int main()
{
    double x, y;

    cout << "Введите два числа через пробел:" << endl;
    cin >> x >> y;

    double sum        = x + y;
    double difference = x - y;
    double product    = x * y;
    double quotient   = x / y;

    cout << x << " + " << y << " = " << sum        << endl; //Печатаем сумму
    cout << x << " - " << y << " = " << difference << endl; //Печатаем разность
    cout << x << " * " << y << " = " << product    << endl; //Печатаем произведение
    cout << x << " / " << y << " = " << quotient   << endl; //Печатаем частное

    return 0;
}
