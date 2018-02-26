#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct thing
{
  float height;
  char  body[];
} Thing;

int main(void)
{
  int *ptr_pJ2;
  int pJ2 = 42;

  Thing *ptr_thing = malloc(10*sizeof(Thing));

  // assign new pointer to point to value for var pJ2
  ptr_pJ2 = &pJ2;

  // create a variable that is assigned to thing struct
//  struct thing *ptr_thing, thing1;

  // Referencing pointer to memory address of thing1
  Thing thing1 = *ptr_thing;

  // assign pointer thing1 to reference struct Thing
  thing1.height = 75.8;

  if ( strcpy(thing1.body, "fifth appendage") != 0 )
  {
    perror("Oops.");
  }

  printf("PJ2: %i\nbody: %s\nheight: %g\n", *ptr_pJ2, thing1.body, thing1.height);

  return 0;
}
