/* Разложить цифру на множители */

#include <stdio.h>
#include <math.h>

/* void factorize( int n, int* a, int* b ) {
  int composite = 0;
  int div = 0;

  if (n!=1) {
    for (int i=2; i<=sqrt(n); i++) {
      if (!(n%i)) {
        composite++;
        if (!div) div = i;
      }
    }
    if (!composite) {
      *a = 1;
      *b = n;
    } else {
      *a = div;
      *b = n/div;
    }
  } else {
    *a = 1;
    *b = n;
  } 
} */

void factorize( int n, int* a, int* b ) {
  *a = 1;
  *b = n;

  for (int i=2; i<=sqrt(n); i++) {
    if (!(n%i)) {
      *a = i;
      *b = n/i;
      return;
    }
  }
}
