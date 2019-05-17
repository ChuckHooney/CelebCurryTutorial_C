#include<stdio.h>

int main()
{
        int money = 30;
        int bill = 10;
        int tip = 5 ;

        int total = money + bill;
        printf("Your total is now %i dollars\n", total);

        int withtip = total +  +tip ;
        printf("After the tip, your total is now %i dollars",withtip);

        return 0;
}
