/* Ввести время через ":", в противном случае вывести правильно */

#include <stdio.h>

int main() {
  int hour=0, minut=0;
  puts("Enter time separated by ':'");
  if (scanf("%d:%d", &hour, &minut) !=2) {
    scanf("%d", &minut);
  }
  /* char temp;
  scanf("%d%c%d", &hour, &temp, &minut); */
  puts("Time:");
  printf("%02d:%02d", hour, minut);
  
  return 0;
}
