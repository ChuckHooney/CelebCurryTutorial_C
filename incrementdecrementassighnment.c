#include<stdio.h>
int main()
{
        int pizzastoeat = 100;
        printf("pizzastoeat: %i\n", pizzastoeat);

        pizzastoeat += 100; //100 + 100 = 200
        printf("pizzastoeat: %i\n",pizzastoeat);

        pizzastoeat -= 50; //200 - 50 = 150
        printf("pizzastoeat: %i\n",pizzastoeat);

        pizzastoeat /= 10; //150 / 100 = 15
        printf("pizzastoeat: %i\n",pizzastoeat);

        pizzastoeat *= 5; //15 * 5 = 3
        printf("pizzastoeat: %i\n",pizzastoeat);

        pizzastoeat %= 5; 
        printf("pizzastoeat: %i\n",pizzastoeat);





        return 0;
}
