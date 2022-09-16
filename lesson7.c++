#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main() {

  array <int, 20> arr1; //массив из 20 целых чисел
  array <string, 10> arr2; //массив из 10 строк
  array <int, 4> arr3 = {1, 2, 3, 4}; //инициализация массива
  array <int, 4> arr4 = {3}; //частичная инициализация

  cout <<"Размер массива arr1:" <<endl; 
  cout <<size(arr1) <<endl; //20
  cout <<arr1.size() <<endl; //20
  cout <<sizeof(arr1)/sizeof(arr1[0]) <<endl; //20
  
  vector <string> vec1;
  vector <double> vec2;
  vector <vector<int>> vec3;
  array <int,40> vec4;
  array <array<double,10>,20> vec5;

  return 0;
}
