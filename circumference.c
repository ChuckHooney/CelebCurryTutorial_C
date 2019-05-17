#include <stdio.h>

int main()
{
        float radius;
        printf("PLease enter a radius:\n ");

        scanf("%f", &radius);

        float circumference = 2 * 3.14159 * radius;
        printf("A circle with a radius of %f has a circumference of %f\n", radius, circumference);

}
