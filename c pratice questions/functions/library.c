#include <stdio.h> 
#include<math.h>
int main()
{
    float a=0.5;
    float w,x,y,z;
    w=sin(a);
    x=cos(a);
    y=tan(a);
    z=pow(a,2);
    printf("the sine value is%f\n and the cosine value is%f\n the tangent value is%f\n and power is%f\n",w,x,y,z);
    return 0;
}