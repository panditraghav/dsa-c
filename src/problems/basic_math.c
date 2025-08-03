#include "basic_math.h"
#include <stdio.h>

void extract_digit(int num) {
  printf("Digit: %d\n", num);
  if (num == 0) {
    printf("0\n");
    return;
  }
  while (num != 0) {
    printf("%d\n", num % 10);
    num /= 10;
  }
}
