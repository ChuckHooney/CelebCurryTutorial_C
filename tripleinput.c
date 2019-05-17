#include <stdio.h>

int main()
{

        printf("Please enter a value\n");


        float value1;

        scanf("%f", &value1);

        printf("Please enter another value\n");


        float value2;

        scanf("%f", &value2);

        printf("Please enter one more value\n");


        float value3;

        scanf("%f", &value3);


        float average = (value1 + value2 + value3)/3;

        printf("The average of %f, %f, and %f is %f\n", value1, value2, value3, average);


}
