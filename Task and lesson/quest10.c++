/* Добавьте в вектор все четные числа, начиная с числа 2 до числа 200, включительно. */

#include<iostream>
#include<vector>

using namespace std;

int main() {

  vector<int> vec;

  vec.resize(100, 2);
  int i=1;
  for (auto& el : vec) {
    el *= i++;
  }
  
  for (auto el : vec) {
    cout << el;
    if (el != vec.size()) cout << ' ';
  }

  return 0;
}

/* for (int i = 2; i < 201; i += 2) {
    vec.push_back(i);
} */