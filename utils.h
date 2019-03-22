#include "datastructs.h"

#ifndef UTILS_H
#define UTILS_H

void swap(int &a, int &b);
void catArr(int arr[], int size);
void initArr(int arr[], int size, int value); // Initialize array with value
 E1* initS1L(int arr[], int size); // Initialize Simple One-Way Linked List with array
void catS1L(E1* list);
 int s1lLength(E1* list);

#endif
