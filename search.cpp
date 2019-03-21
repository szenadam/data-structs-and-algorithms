#include "search.h"

int linearSearch(int arr[], int size, int x)
{
  int i = 0;

  while (i <= size && arr[i] != x)
  {
    i++;
  }

  if (i > size)
  {
    i = 0;
  }

  return i;
}

int binarySearch(int arr[], int size, int x)
{
  return binSearch(arr, 0, size, x);
}

int binSearch(int arr[], int u, int v, int x)
{
  if (u > v)
  {
    return 0;
  }

  int m = (u + v) / 2;
  if (arr[m] > x)
  {
    return binSearch(arr, u, m - 1, x);
  }
  else if (arr[m] < x)
  {
    return binSearch(arr, m + 1, v, x);
  }
  else if (arr[m] == x)
  {
    return m;
  }
}