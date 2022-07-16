#include <stdio.h>

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int factorial = 1;
  int len = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < len; i++)
  {
    factorial *= arr[i];
  }

  printf("%d\n", factorial);
  return 0;
}