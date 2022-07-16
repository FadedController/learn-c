#include <stdio.h>
#include <string.h>

int main()
{
  /* define first_name */
  char *first_name = "John";

  /* define last_name */
  char last_name[] = "Boe";
  char name[100];

  last_name[0] = 'D';
  sprintf(name, "%s %s", first_name, last_name);
  if (strncmp(name, "John Doe", 100) == 0)
  {
    printf("Done!\n");
  }

  printf("%s\n", name);
  return 0;
}