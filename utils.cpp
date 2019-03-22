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

void catS1L(E1 *list)
{
  while (list->next != NULL)
  {
    std::cout << list->key << " ";
    list = list->next;
  }
  std::cout << std::endl;
}

E1 *initS1L(int arr[], int size)
{
  E1 *r = new E1();
  E1 *temp = r;

  for (size_t i = 0; i < size; i++)
  {
    temp->key = arr[i];
    temp->next = new E1();
    temp = temp->next;
  }

  return r;
}

int s1lLength(E1 *list)
{
  int n = 0;
  E1 *p = list;
  while (p->next != NULL)
  {
    n = n + 1;
    p = p->next;
  }
  return n;
}
