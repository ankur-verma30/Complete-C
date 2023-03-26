/* WAP a program to check whether a triaangle is valid or not, if three angles of the triangle are entered through the keyboard . a triangle is valid if the sum of all the angles is equal to 180 degrees*/
#include<stdio.h>
int main()
{
    int s1,s2,s3,angle;
    printf("eenter the three sides of the triangle \n");
    scanf("%d %d %d",&s1,&s2,&s3);
    angle=s1+s2+s3;
     if(angle==180)
     printf("the triangle is valid ");
     else
     printf("the triangle is invalid");
     return 0;
}