#include <stdio.h>
int main()
{
        int slices = 17;
        int people = 2;

        double halfpizza = (double)(slices/people);

        //printf("%f\n", halfpizza);

        double c = 25/2 * 2;
        printf("c = %f\n",c);

        double d = 25/2 * 2.0;
        printf("d = %f\n",d);

        double e = 25/2.0 * 2;
        printf("d = %f\n",e);

        double f = 25.0/2 * 2.0;
        printf("d = %f\n",f);

        return 0;
}
