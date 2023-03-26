/* if the length of the three sides of the triangle are entered through the keyboard ,WAP to check whether the triangle is and isosceles ,an equilateral, a scalene , or a right angled triangle. */
#include <stdio.h> 
#include<math.h>

int main()
{
    int s1,s2,s3;
    printf("enter the sides of the triangle\n");
    scanf("%d %d %d", &s1,&s2,&s3);
    if(s1==s2==s3)
    {
        printf("this is a equilateral triangle\n");
    }
    if(s1==s2 || s2==s3 || s3==s1)
    {
printf("this is a isosceles triangle\n");
    }
if(s1!=s2 && s2!=s3 && s3!=s1)
{
    printf("this is a scalene triangle\n");
}
if (s1> (s2&&s3))
 {  if (pow(s1,2)==(pow(s2,2)+pow(s3,2)))
   printf ( "this is a right angled triangle\n");
 }
if (s2>(s1&&s3))
{
  if (pow(s2,2)==(pow(s1,2)+pow(s3,2)))
    printf (" this is right angled triangle");

}
    if (s3>(s1&&s2))
 {

  if(pow(s3,2)==(pow(s1,2)+pow(s2,2))) 
    printf (" this is right angled triangle");         
}   
    return 0;
}