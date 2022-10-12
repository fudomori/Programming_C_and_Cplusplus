/* Вам даны имя, отчество и фамилия (на англ. языке). Необходимо вывести фамилию и инициалы. */

#include <stdio.h>
#include <string.h>

int main() {
  char first_name[21]; //Буфер для имени ( 20 символов + ноль-символ )
  gets(first_name); //Читаем с клавиатуры имя
  
  char last_name[21]; //Буфер для имени ( 20 символов + ноль-символ )
  gets(last_name); //Читаем с клавиатуры имя

  char middle_name[21]; //Буфер для имени ( 20 символов + ноль-символ )
  gets(middle_name); //Читаем с клавиатуры имя
  
  printf("%s %c. %c.\n", middle_name, first_name[0], last_name[0]);
  
  return 0;
}
