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
int count_number_of_digits(int num) {
  printf("Digit: %d\n", num);
  if (num == 0) {
    printf("Count: 0\n");
    return 0;
  }
  int count = 0;
  while (num > 0) {
    num /= 10;
    count++;
  }
  printf("Count: %d\n", count);
  return count;
}

int reverse_number(int num) {
  printf("Digit: %d\n", num);

  int reversed = 0;

  if (num == 0) {
    printf("Reversed: %d\n", reversed);
    return reversed;
  }

  while (num > 0) {
    reversed = (reversed * 10) + (num % 10);
    num /= 10;
  }
  printf("Reversed: %d\n", reversed);
  return reversed;
}
