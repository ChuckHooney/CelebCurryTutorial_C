#include <stdio.h>
#include <stdbool.h>

int x = 5;
int y = 6;
int z = 3;

if(x > 5)//false
{
  printf("hello\n");//print Hello
}
//else
{
  x = 7 //x = 7
}

if((y - x) > 3) //false
{
  z++ //z = 4
}

printf("hello again\n");

if((z -3) > 4)
{
  printf("world");
}
