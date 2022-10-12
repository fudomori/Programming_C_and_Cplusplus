/* Вам нужно ввести строку с клавиатуры и определить её длину. В вводе далее указан некоторый символ, количество встреч которого необходимо сосчитать. */

#include <iostream>

using namespace std;

int main() {
  string str;
  getline(cin, str);
  char findStr;
  cin >> findStr;

  int count=0;
  for (char el : str) {
    if (el == findStr) count++;
  }

  cout << str.length() << endl;
  cout << count << endl;
  
  return 0;
}

/*     k = count (S.begin (), S.end (), c); */