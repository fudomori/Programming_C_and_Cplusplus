#include <iostream>
#include <vector>
#include <set>
#include <iterator>
#include <sstream>

using namespace std;

int main() {

  /* 1 вариант */
  vector<int> vec1 = {1,2,3,1,2,3,4,1,2,-1,0,-5,1000};
  set<int> s1; //Пустое множество

  //Добавляем в множество все элементы вектора
  for (const auto& element : vec1) {
      s1.insert(element);
  }

  //Выводим все элементы множества через запятую (и пробел)
  for (const auto& element : s1) {
      cout <<element <<", ";
  }
  cout << endl;

  /* 2 вариант */
  vector<int> vec2 = {1,2,3,1,2,3,4,1,2,-1,0,-5,1000};

  //Помещаем в множество все элементы вектора
  set<int> s2 (vec2.begin(), vec2.end());

  //Выводим все элементы множества через запятую (и пробел)
  for (const auto& element : s2) {
      cout <<element <<", ";
  }
  cout << endl;

  /* 3 вариант */
  vector<int> vec3 = {1,2,3,1,2,3,4,1,2,-1,0,-5,1000};

  //Помещаем в множество все элементы вектора
  set<int> s3 (vec3.begin(), vec3.end());

  //Выводим все элементы множества через запятую (и пробел)
  copy(s3.begin(), s3.end(), ostream_iterator<int>(cout, ", "));
  
  return 0;
}
