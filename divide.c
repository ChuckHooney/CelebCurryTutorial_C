#include <stdio.h>

int main()
{
        float x;
        printf("Enter a value:\n");
        scanf("%f", &x);

        float y;
        printf("Enter another value\n");
        scanf("%f", &y);

        float z = x/y;
        printf("%.2f divided by %.2f is %.2f\n", x,y,z);

        return 0;
}
