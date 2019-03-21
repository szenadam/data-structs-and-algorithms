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