#include<stdio.h>
int main()
{
        int pizza = 100;
        int output = pizza++;

        printf("Output: %i\n",output);
        printf("Pizza: %i\n", pizza);

        return 0;
}
