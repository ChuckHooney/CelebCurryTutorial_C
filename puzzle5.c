#include<stdio.h>
int main()
{
        int x = 5;
        int y = 7;
        int z = 6;
        printf("x = %i\ty = %i\tz = %i\n", x, y, z);

        x += 3;
        printf("x = %i\ty = %i\tz = %i\n", x, y, z);

        //x + 4;
        //printf("x = %i\ny = %i\nz = %i\n", x, y, z);

        y = x + y;
        printf("x = %i\ty = %i\tz = %i\n", x, y, z);

        z = x - y;
        printf("x = %i\ty = %i\tz = %i\n", x, y, z);

        y = y - 5;
        printf("x = %i\ty = %i\tz = %i\n", x, y, z);

        x = x - y;
        printf("x = %i\ty = %i\tz = %i\n", x, y, z);

        z = z + x - y;
        printf("x = %i\ty = %i\tz = %i\n", x, y, z);

        y += x;
        printf("x = %i\ty = %i\tz = %i\n", x, y, z);

        z = x;
        printf("x = %i\ty = %i\tz = %i\n", x, y, z);

        x = z;
        printf("x = %i\ty = %i\tz = %i\n", x, y, z);

        //y + 9;
        //printf("x = %i\ny = %i\nz = %i\n", x, y, z);

        return 0;
}
