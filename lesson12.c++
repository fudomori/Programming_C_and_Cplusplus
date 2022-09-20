#include <iostream>

using namespace std;

int main() {
  int a, *b;
  system("chcp 65001");
  system("cls");
  a = 134;
  b = &a;

  int i = 2;
  int *pi = &i;
  int **ppi = &pi;

  void *pi = NULL;
  void *pi (0);
  void *pi = 0;
  void *pi = nullptr;
  int *pi = NULL;
  int *pi (0);
  int *pi = 0;
  int *pi = nullptr;

  // Выделение памяти под строку типа string из 100 пробелов (язык C++)
  string * ps = new string(100, ' ');

  // Выделение памяти для Си-строки максимум в 100 символов (язык Си)
  char * ps = (char*) malloc(100 + 1);

  // Выделение памяти под массив из 100 строк типа string (язык C++)
  string * ps = new string[100];

  // Выделение памяти под пустую строку типа string (язык C++)
  string * ps = new string;

  // Выделение памяти для целочисленного массива размера 100 (язык Си)
  int * pi = (int*) malloc(100*sizeof(int));

  // Выделение памяти для одной переменной типа int (язык Си)
  int * pi = (int*) malloc(sizeof(int));

  // Выделение памяти под массив из 100 вещественных значений (язык C++)
  double * pd = new double[100];


  // %x = вывод числа в шестнадцатеричной форме
  printf("\n Значение переменной a равно %d = %x шестн.", a,a);
  printf("\n Адрес переменной a равен %x шестн.", &a);
  printf("\n Данные по адресу указателя b равны %d = %x шестн.", *b,*b);
  printf("\n Значение указателя b равно %x шестн.", b);
  printf("\n Адрес расположения указателя b равен %x шестн.", &b);
  getchar();
  return 0;
}