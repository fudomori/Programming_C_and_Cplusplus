/* Напишите программу, которая напечатает вначале числа кратные 3 (т.е. которые делятся на 3 без остатка), а затем не кратные 3 (т.е. дающие ненулевой остаток от деления на 3) из диапазона. */

#include <iostream>

using namespace std;

int main() {
  int valueMin, valueMax;
  cin >> valueMin >> valueMax;

  for (int i=valueMin; i<=valueMax; i++) {
    if (i%3==0) {
      cout << i << " ";
    }
  }
  for (int i=valueMin; i<=valueMax; i++) {
    if (i%3) {
      cout << i << " ";
    }
  }
  return 0;
}
