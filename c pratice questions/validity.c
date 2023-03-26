/*if the length of the three sides of the triangle are entered through the keyboard , write a program to check whether the triangle is valid or not . the triangles is valid if the sum of two sides is greater than the largest of thee three sides. */
#include <stdio.h>
int main()
{
    int  side1,side2,side3,largeside,sum;
    printf("enter the sides of the triangle:");
    scanf("%d %d %d",&side1,&side2, &side3);
    if(side1>side3)
    {
        if(side1>side2)
    {
        sum=sum2+side3;
        largeside=side1;
            }
            else{
                sum=side1+side2;
                largeside=side3;
            }













    return 0;
}