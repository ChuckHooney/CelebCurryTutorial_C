#include <stdio.h>

int main()
{
        //int double float
        //25,000
        double dogs ;

        printf("How many dogs do you have?\n");

        scanf("%lf", &dogs);

        printf("%f\n%e\n%g\n", dogs, dogs, dogs);
        //printf("%i, %f, %f\n",1, 1111.1111, 1111.1111F);

        // %e - scientific notation
        //%g - computer decides
        //      < -4 = scientic notaion
        //      > 5 = scientific notation
        //      > -4 = decimal notation
        //      < 5 = decimal notation


        return 0;
}
