/* Напишите функции, которые будут принимать целые числа и возвращать целые числа и будут, называться, соответственно. */

#include <iostream>

using namespace std;

int cube(int x) {
  return x*x*x;
}

int sign(int x) {
  if (x<0) return -1;
  if (x>0) return 1;
  return 0;
}

int round_avg(int a, int b) {
  return (a+b)/2;
}

int main() {
    int a,b;
    cin >>a >>b;
    cout <<"Куб числа " <<a <<" равен " <<cube(a) <<endl;
    cout <<"Знак числа " <<a <<" равен " <<sign(a) <<endl;
    cout <<"Округленное среднее арифметическое чисел "<<a <<" и " <<b  <<" равно " <<round_avg(a, b) <<endl;
    return 0;
}
