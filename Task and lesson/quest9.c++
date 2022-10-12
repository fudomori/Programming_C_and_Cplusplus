/* Напишите программу, которая выберет из заданного вектора только числа, принадлежащие указанному диапазону. */

#include<iostream>
#include<vector>

using namespace std;

int main() {
  int value;
  cin >> value;

  vector<int> vec(value);
  for (auto& el : vec) {
    cin >> el;
  }

  int min, max;
  cin >> min >> max;

  for (auto el : vec) {
    if (el >= min && el <= max) {
      cout << el << ' ';
    }
  }
  return 0;
}
