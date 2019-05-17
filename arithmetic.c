#include <stdio.h>

int main()
{
          float radius;
          printf("Please enter a radius: ");

          scanf("%f",&radius);

          float area = 3.14159 * (radius * radius);
          printf("A circle with a radius of %f has an area of %f\n", radius, area);
          return 0;
}

//At 8:19-22,the "%f" and the & can't be together
