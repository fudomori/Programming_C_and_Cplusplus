#include <iostream>

using namespace std;

int main() {
  int a, *b;
  system("chcp 65001");
  system("cls");
  a = 134;
  b = &a;
  
  int A[10] = {2, 4, 6, 8, 10};

  cout << &A+2;

  // %x = вывод числа в шестнадцатеричной форме
  printf("\n Значение переменной a равно %d = %x шестн.", a,a);
  printf("\n Адрес переменной a равен %x шестн.", &a);
  printf("\n Данные по адресу указателя b равны %d = %x шестн.", *b,*b);
  printf("\n Значение указателя b равно %x шестн.", b);
  printf("\n Адрес расположения указателя b равен %x шестн.", &b);
  getchar();
  return 0;
}