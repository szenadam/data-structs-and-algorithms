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
  return binSearch(arr, 1, size, x);
}

int binSearch(int arr[], int u, int v, int x) // TODO Not doing what it's supposed to :-/
{
  if (u > v)
  {
    return 0;
  }
  else
  {
    int m = (int)(((u + v) / 2) + 0.5);
    if (arr[m] > x)
    {
      return binSearch(arr, u, m - 1, x);
    }
    else if (arr[m] < x)
    {
      return binSearch(arr, m + 1, v, x);
    }
    else
    {
      return m;
    }
  }
}