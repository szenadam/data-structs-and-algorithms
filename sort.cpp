#include "sort.h"
#include "utils.h"
#include <vector>

void naiveInsertionSort(int arr[], int size)
{
  for (int i = 1; i < size; i++)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
      swap(arr[j - 1], arr[j]);
      j = j - 1;
    }
  }
}

void insertionSort(int arr[], int size)
{

  for (int i = 1; i < size; i++)
  {
    if (arr[i - 1] > arr[i])
    {
      int x = arr[i];
      arr[i] = arr[i - 1];
      int j = i - 2;
      while (j > 0 && arr[j] > x)
      {
        arr[j + 1] = arr[j];
        j = j - 1;
      }
      arr[j + 1] = x;
    }
  }
}

void mergeSort(int arr[], int size)
{
  ms(arr, 0, size);
}

void ms(int arr[], int u, int v)
{
  if (u < v)
  {
    int m = (u + v) / 2;
    ms(arr, u, m);
    ms(arr, m + 1, v);
    merge(arr, u, m, v);
  }
}

void merge(int arr[], int u, int m, int v) // TODO: Not working at all
{
  int d = m - u;
  int *Z = new int[d + 1]; // I think the problem is this

  for (int i = u; i < m; i++)
    Z[i - u] = arr[i];

  int k = u;
  int j = 0;
  int i = m + 1;
  while (i <= v && j <= d)
  {
    if (arr[i] < Z[j])
    {
      arr[k] = arr[i];
      i = i + 1;
    }
    else
    {
      arr[k] = Z[j];
      j = j + 1;
    }
    k = k + 1;
  }
  while (j <= d)
  {
    arr[k] = Z[j];
    k = k + 1;
    j = j + 1;
  }
}
