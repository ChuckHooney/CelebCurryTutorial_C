#include <stdio.h>
#include <math.h>

int main()
{
        double A;
        printf("Please enter a value for A:\n");
        scanf("%lf", &A);
        printf("A = %f\n",A);

        double B;
        printf("Please enter a value for B:\n");
        scanf("%lf", &B);
        printf("A = %f\n",B);

        double C = (A * A) + (B * B);

        double hypotenuse = sqrt(C);
        printf("The hypotenuse is %lf\n", hypotenuse);


        return 0;
}
