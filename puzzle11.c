#include <stdio.h>
#include <stdbool.h>

int main()
{
  printf("please choose a number from 1-9\n");
  int inputnumber;
  scanf("%d",&inputnumber);
  //printf("%d",inputnumber);

  if(inputnumber == 1)
  {
    printf("one\n");
  }
  else if(inputnumber == 2)
  {
    printf("two\n");
  }
  else if(inputnumber == 3)
  {
    printf("three\n");
  }
  else if(inputnumber == 4)
  {
    printf("four\n");
  }
  else if(inputnumber == 5)
  {
    printf("five\n");
  }
  else if(inputnumber == 6)
  {
    printf("six\n");
  }
  else if(inputnumber == 7)
  {
    printf("seven\n");
  }
  else if(inputnumber == 8)
  {
    printf("eight\n");
  }
  else if(inputnumber == 9)
  {
    printf("nine\n");
  }
  else if(inputnumber >= 10)
  {
    printf("too high\n");
  }
  else if(inputnumber < 0)
  {
    printf("too low\n");
  }
printf("game over\n");

  return 0;
}
