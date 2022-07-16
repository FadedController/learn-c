#include <stdio.h>

int main()
{
  int average;

  int grades[3] = {90, 80, 85};

  average = (grades[0] + grades[1] + grades[2]) / 3;

  printf("The average is %d\n", average);

  return 0;
}