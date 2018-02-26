#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int input(char *s,int length);

// https://stackoverflow.com/questions/122616/how-do-i-trim-leading-trailing-whitespace-in-a-standard-way
size_t trim(char str)
{
  char *end = str;

  while(isspace((unsigned char)*str)) str++;

  if ( *str == 0 )
    return (size_t)(end - str);

  end = str + strlen(str) - 1;
  while(end > str && isspace((unsigned char)*end)) end--;

  *(end + 1) = 0;

  return (size_t)(end - str);
}

int perimeter(int *c_array)
{
  for ( int i = 0; i <= sizeof(c_array); i++ )
  {
    printf("index: %i -> value: %i\n", i, c_array[i]);
  }

  return 0;
}

int main()
{
    char  *line;
    int    num_testcases;
    int    index     = 0;
    int   *c_array[] = {};
    size_t bufsize   = 32;

    line             = (char *)malloc(bufsize * sizeof(char));

    if ( line == NULL )
    {
      perror("Unable to allocate memory buffer to contain line from input.");
      exit(1);
    }

    while ( getline(&line, &bufsize, stdin) != -1 )
    {
      trim(*line);
      c_array[index] = *line;
    }

    num_testcases = *c_array[0];
    printf("Number of testcases will be: %i\n", num_testcases);
    return perimeter(*c_array);
}
