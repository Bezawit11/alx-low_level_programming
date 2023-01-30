#ifndef SEARCH_H
#define SEARCH_H

int linear_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int search(int *array, size_t low, size_t high, int value);
int i_Search(int *array, int low, int high, int x);
int interpolation_search(int *array, size_t size, int value);
#endif
