/* Напишите программу, которая определяет, попадает ли точка внутрь круга. */

#include <iostream>

using namespace std;

int main() {
  int x0, y0, r;
  cin >> x0 >> y0 >> r;
  int x, y;
  cin >> x >> y;

  if (((x0 - x)*(x0 - x)+(y0 - y)*(y0 - y) <= r*r)) cout << "inside" << endl;
  else cout << "outside" << endl;
  
  return 0;
}
