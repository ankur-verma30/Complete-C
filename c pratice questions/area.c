/*area and circumference of the circle */
#include<stdio.h>
int main()
{
    float area,r, cir;
    printf(" enter the values of the radius of  the circle \n ");
    scanf("%f",&r);
     area=22/7*r*r;
     cir=22/7*2*r;
     printf("the area of the cirle is %f and the area io the circle is %f",area ,cir);
     return 0;
    
}