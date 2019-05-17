#include <stdio.h>
#include <stdbool.h>

int main ()
{
          bool pizzaishealthy;
          int temp;

          //printf("Before: pizzaishealthy = %d\n", pizzaishealthy);
          //printf("Before: temp = %d\n", temp);

          printf("Do you like pizza?, Enter 1 for 'Yes', Enter 0 for 'No'\n");
          scanf("%d", &temp);

          pizzaishealthy = temp;

          //printf("Afer: pizzaishealthy = %d\n", pizzaishealthy);
          //printf("After :temp = %d\n", temp);

          if(pizzaishealthy)
          {

              printf("Welocme to my pizza app\n");
            //pizzaishealthy = temp;
          }

          return 0;
}
