#include <iostream>
#include "utils.h"
#include "search.h"
#include "sort.h"

using namespace std;

int main()
{
  int unorderedArray[10] = {1, 2, 5, 7, 3, 8, 9, 10, 4, 6};
  int orderedArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int emptyArray[0];
  int arrayWithOneElement[1] = {1};
  E1* simpleOnewayList = initS1L(unorderedArray, 10);

  return 0;
}
