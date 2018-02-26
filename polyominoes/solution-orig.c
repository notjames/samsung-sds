#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
  char *line = NULL;
  int lineno = 0;

  printf("Starting now...\n");
  while ( getline(&line, NULL, stdin) != -1 )
  {
    lineno++;

    printf("%i: %s\n", lineno, line);
  }

  return 0;
}
