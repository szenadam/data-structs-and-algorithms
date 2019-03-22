#include "sort.h"
#include "utils.h"

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
