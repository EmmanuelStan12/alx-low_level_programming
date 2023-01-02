#ifndef SEARCH_ALGORITHM_HEADER
#define SEARCH_ALGORITHM_HEADER

#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);

int binary_search(int *array, size_t size, int value);

int jump_search(int *array, size_t size, int value);

int exponential_search(int *array, size_t size, int value);

#endif
