#include "basic_math.h"
#include <stdio.h>

/*
 * How many times the loop is running!
 * Time Complexity: log10(N)
 */
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

/*
 * How many times the loop is running!
 * Time Complexity: log10(N)
 */
void count_number_of_digits(int num) {
  printf("Digit: %d\n", num);
  if (num == 0) {
    printf("Count: 0\n");
    return;
  }
  int count = 0;
  while (num > 0) {
    num /= 10;
    count++;
  }
  printf("Count: %d\n", count);
}

void reverse_number(int num) {
  printf("Digit: %d\n", num);

  int reversed = 0;

  if (num == 0) {
    printf("Reversed: %d\n", reversed);
    return;
  }

  while (num > 0) {
    reversed = (reversed * 10) + (num % 10);
    num /= 10;
  }
  printf("Reversed: %d\n", reversed);
}
