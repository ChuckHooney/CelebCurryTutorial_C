#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int main()
{
      int maxvalue = 5;
      srand(time(NULL));

      int randomnumber = rand() % maxvalue + 1;

      //printf("%i\n", randomnumber);


      printf("guess a number between 0 and %d\n", maxvalue);

      int inputnumber;
      scanf("%d",&inputnumber);

      printf("You entered %d, the number was %d\n", inputnumber,randomnumber);


      //validating input
      //input is invalid
      if(inputnumber < 0)
      {
        printf("invalid input\n");
        return -1;
      }


      //validating input
      //input is invalid
      if(inputnumber > maxvalue)
      {
        printf("invalid input\n");
        return -1;
      }


      //checking input
      //comparing input and randomnumber
      if(inputnumber == randomnumber)
      {
        printf("You won!!!\n");
      }
      else
      {
        printf("You Lost!!!!\n");
      }


      //the end
      printf("game over\n");
        return 0;
}
