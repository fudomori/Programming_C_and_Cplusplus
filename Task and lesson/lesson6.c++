#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    string str;
    getline (cin, str);
    istringstream strin (str);
    vector<int> vec;
    int x;
    while (strin >> x)
    {
        vec.push_back(x);
    }
    
    int y;
    cin >>y;
    
    int count = 0;
    for (auto el : vec)
    {
        if (el == y)
        {
            count++;
        }
    }
    
    cout <<"Элемент " <<y <<" встречался в векторе " <<count <<" раз." <<endl;

    return 0;
}

/* Отмечу несколько мест в программе:
  1.  Для ввода строки с пробелами используем функцию getline. Если бы что-то вводилось до этой строки, то, скорее всего, пришлось бы добавить еще конструкцию cin >>ws; до вызова getline.
  2.  Создаем поток с именем strin типа istringstream для ввода из строки str. Далее вместо cin >> x пишем strin >>x
  3.  Вводим число y и задаем начальное значения счетчика count равное 0. Как только очередной элемент массива el равен y,  увеличиваем счетчик count.
  4.  Для работы строк подключаем заголовочный файл string, для работы строковый потоков - заголовочный файл sstream. */
