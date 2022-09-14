/* Напишите программу, которая напечатает числа, кратные числу mm, из диапазона [a,b]. */

#include <iostream>

using namespace std;

int main() {
  long long min, max, mult;
  cin >> min >> max >> mult;

  if (min%mult == 0) {
    for (long long i=min; i<=max; i+=mult) {
      cout << i << ' ';
    }
  } else {
    if (min < 0) {
      min += min%mult*(-1);
    } else {
      min += mult-(min%mult);
    }
    while (min<=max) {
      cout << min << ' ';
      min+=mult;
    }
  }

  return 0;
}

/*     for(a += (m-a%m)%m; a <= b; a += m)
        cout << a << ' '; */