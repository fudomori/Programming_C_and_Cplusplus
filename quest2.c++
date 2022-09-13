/* Напишите программу, которая определит знак целого числа. */

#include <iostream>

using namespace std;

int main() {
  double x;
  cin >> x;
  cout << (x<0 ? x/(-x) : x>0 ? x/x : 0) << endl;
  return 0;
}
