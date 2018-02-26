// https://www.programiz.com/c-programming/c-structures-pointers
#include <stdio.h>
typedef struct person
{
   int age;
   float weight;
} p;

int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;            // Referencing pointer to memory address of person1

    printf("Enter integer: ");
    scanf("%d",&personPtr->age);

    printf("Enter number: ");
    scanf("%f",&personPtr->weight);

    printf("Displaying: ");
    printf("age: %d weight: %g\n", personPtr->age, personPtr->weight);

    return 0;
}
