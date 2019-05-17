//doctors offive
//1)add a patient
//2)view a patient
//3)search a patient
//4)exit

#include <stdio.h>

int main()
{
  printf("Please choose an option between 1-4\n");
  printf("1)add a patient\n");
  printf("2)view a patient\n");
  printf("3)search a patient\n");
  printf("4)exit\n");

  int input;
  scanf("%d",&input);

  if(input == 1)
  {
      printf("adding a patient\n");
  }else if(input == 2)
  {
      printf("viewing a patient\n");
  }else if(input == 3)
  {
      printf("searching a patient\n");
  }else if(input == 4)
  {
      printf("exiting...\n");
  }else
  {
    printf("incorrect input");
  }
  return 0;
}
