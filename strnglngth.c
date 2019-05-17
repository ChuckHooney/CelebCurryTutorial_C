#include <stdio.h>
#include <string.h>

int main()
{
  char meas[100];
  int length;

  printf("Enter a string to calculate it's length\n");
  //gets(a);
  scanf("%s", meas);

  length = strlen(meas);

  printf("Length of the string = %d\n", length);

  return 0;
}
