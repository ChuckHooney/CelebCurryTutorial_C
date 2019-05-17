#include <stdio.h>

int main ()
{
          printf("what is your name?\n");

          //char name[0];
          char *name;

          scanf("%s", name);

          printf("Hello %s, you look nice today\n", name);

          return 0;

}
