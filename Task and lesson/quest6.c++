/* Напишите программу, которая по целому числу определяет количество его цифр. */

#include <iostream>

using namespace std;

int amountNumber (int value) {
  if (value) {
    return amountNumber(value/10)+1;
  }
  return value;
}

int main() {
  int value;
  cin >> value;

  if (value == 0) {
    cout << 1 << endl;
    return 0;
  }
  cout << amountNumber(value) << endl;
  return 0;
}

/* int main() {
    // put your code here
    std::string str;
    std::cin >> str;
    std::cout << str.length();
    return 0;
} */
