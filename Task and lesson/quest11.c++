/* Рассчитайте результирующую оценку по правилам (каждый судья выставляет некоторую оценку, затем отбрасывается минимальная и максимальная оценка, а из всех остальных рассчитывается среднее значение), если Вам заданы исходные оценки. */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  vector<double> vec;

  double el;
  while (cin >> el) {
    vec.push_back(el);
  }

  sort(vec.begin(), vec.end());
  vec.erase(vec.begin()+0);
  vec.pop_back();

  double sum=0;
  for (auto el : vec) {
    sum += el;
  }
  cout << sum / vec.size() << endl;
  
  return 0;
}

/* 
int main() {

  vector<double> vec;

  double sum=0;
  double min = INT64_MAX, max = INT64_MIN, el;
  while (cin >> el) {
    vec.push_back(el);
    sum += el;
    if (el < min) {
      min = el;
    }
    if (el > max) {
      max = el;
    }
  }

  cout << (sum - min - max) / (vec.size()-2);
  
  return 0;
} */
