/* Игра: "Угадай число!" */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

#define MIN_VALUE 1
#define MAX_VALUE 1000

using namespace std;

int main() {
  SetConsoleCP(65001);
  SetConsoleOutputCP(65001);

  srand(time(NULL));
  int secret = MIN_VALUE + rand() % (MAX_VALUE - MIN_VALUE + 1);

  cout << "Загадано число от " << MIN_VALUE << " до " << MAX_VALUE << endl;

  int inputNumber, count=0;
  do {
    cout << "Ваша догадка?" << endl;
    cin >> inputNumber;
    if (secret < inputNumber) {
      cout << "Загаданное число меньше < чем ваша догадка!" << endl;
    }
    if (secret > inputNumber) {
      cout << "Загаданное число больше > чем ваша догадка!" << endl;
    }
    count++;
  } while (inputNumber != secret);

  cout << "Ура! Вы угадали число с " << count << "-й попытки! Это число было: " << secret << endl;
  return 0;
}
