#include "dynamic_array.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_FUNCTION_IMPLEMENTATION(type)                                    \
  type##_array type##_array_new(size_t base_capacity) {                        \
    return (type##_array){.length = 0,                                         \
                          .capacity = base_capacity,                           \
                          .array = malloc(sizeof(type) * base_capacity)};      \
  }                                                                            \
  type type##_array_get_element(type##_array *arr, size_t index) {             \
    if (index > arr->length) {                                    \
      fprintf(stderr, "Accessing elements out of bound\n");                    \
      exit(EXIT_FAILURE);                                                      \
    }                                                                          \
    return 0;                                                                  \
  }                                                                            \
  void type##_array_push_back(type##_array *arr, type element) {               \
    if (arr->length == arr->capacity) {                                        \
      type *new_arr = malloc(arr->capacity * 2 * sizeof(type));                \
      memcpy(new_arr, arr->array, arr->length * sizeof(type));                 \
      free(arr->array);                                                        \
      arr->array = new_arr;                                                    \
      arr->capacity = arr->capacity * 2;                                       \
    }                                                                          \
    arr->array[arr->length] = element;                                         \
    arr->length++;                                                             \
  }                                                                            \
  void type##_array_pop_back(type##_array *arr) {                              \
    if (arr->length > 0) {                                                     \
      arr->length--;                                                           \
    }                                                                          \
  }

ARRAY_FUNCTION_IMPLEMENTATION(int)
ARRAY_FUNCTION_IMPLEMENTATION(float)
