#include <stdio.h> 
#include<math.h>
int main()
{
    float s,a,b,c,area;
    printf(" enter the sides of the triangle\n");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
     area=sqrt((s*(s-a)*(s-b)*(s-c)));
     printf("the area of the triangle%f",area);
    return 0;
}