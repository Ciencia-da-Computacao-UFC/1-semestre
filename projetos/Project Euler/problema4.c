#include <stdio.h>
#include <stdbool.h>

short int ispalindrome(int n){
  int r = 0, t = n;
  while (t != 0) {
   r = (r * 10) + (t%10);
   t /= 10;
  }
  return (n == r);
}

int main(void) {
  int i = 0, j = 0, k = 0, l = 0;
  for (i = 100; i <= 999; i++) {
    for (j = 100; j <= i; j++) {
      l = (i * j);
      k = (ispalindrome(l)) && (l > k) ? l : k;
    }
  }
  printf("%i\n", k);
  return 0;
}