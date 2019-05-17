#include <stdio.h>

int main()
{
        float value1;

        printf("Please enter a value:\n");
        scanf("%f", &value1);

        float value2;

        printf("Now enter another value:\n");
        scanf("%f", &value2);

        float sum = value1 + value2;
        printf("The sum of %f and %f is %f\n",value1, value2, sum);

}
