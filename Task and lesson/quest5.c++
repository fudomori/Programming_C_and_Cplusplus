/* Напишите программу, которая по целому числу определяет его сумму цифр. */

#include <iostream>

using namespace std;

int main() {
  int value;
  cin >> value;

  int sum=0;
  while (value>0) {
    sum += value % 10;
    value/=10;
  }

  cout << sum << endl;
  return 0;
}

/* int adding(int x){
    if(x){
        return adding(x/10) + x % 10;
    }
    return x;
} */

/*     for(cin >> number; number > 0; number /= 10)
        sum += number % 10; */
