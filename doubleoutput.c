#include <stdio.h>


void raghav (float l) {

  printf ("in the raghav. I got a parameter %f \n", l);

}


void rajiv (){

}
int main()
{
        float length;
        printf("Please enter a lenght:\n");
        scanf("%f", &length);
        raghav (length);



        float width;
        printf("Now enter a width:\n");
        scanf("%f", &width);
        raghav(width);


        float perimeter = (length * 2) + (width * 2);
        //printf("a perimeter of %f\n", perimeter );
        float area = length * width;
        //printf("an area of %f\n", area);
        printf("A quadrilateral with a length of %f and a width of %f has a perimeter of %f and an area of %f\n", length, width, perimeter, area);
        return 0 ;
}



// 1 name of the function
// 2 return type
// 3 what arguments it gets
