#include <stdio.h>

/***************
Author: Raghav Narula
Description: Dozening eggs
Date: 2/25/19
***************/

int main ()
{
          printf("The number of eggs for the day:");

          int eggs;
          scanf("%i", &eggs);

          double dozen = (double) eggs / 12;

          printf("Today there are %f doezen eggs\n", dozen);

          return 0;
}
