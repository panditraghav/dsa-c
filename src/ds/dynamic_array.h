#ifndef DYNAMIC_ARRAY
#define DYNAMIC_ARRAY

#include <stddef.h>

#define ARRAY_STRUCT(type)                                                     \
  typedef struct {                                                             \
    size_t capacity;                                                           \
    size_t length;                                                             \
    type *array;                                                               \
  } type##_array

ARRAY_STRUCT(int);
ARRAY_STRUCT(float);

#define ARRAY_FUNCTIONS_DEFINATION(type)                                       \
  type##_array type##_array_new(size_t base_capacity);                           \
  type type##_array_get_element(type##_array *arr, size_t index);                                 \
  void type##_array_push_back(type##_array *arr, type element);                                        \
  void type##_array_pop_back(type##_array *arr);

ARRAY_FUNCTIONS_DEFINATION(int)
ARRAY_FUNCTIONS_DEFINATION(float)

#endif // !DYNAMIC_ARRAY
