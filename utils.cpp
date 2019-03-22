#include "utils.h"
#include <iostream>

void swap(int &x, int &y)
{
  int z = x;
  x = y;
  y = z;
}

void catArr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

void initArr(int arr[], int size, int x)
{
  for (int i = 0; i < size; i++)
  {
    arr[i] = x;
  }
}
