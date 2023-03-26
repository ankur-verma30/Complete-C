#include <stdio.h> 
float square(float);
/*return type function*/
int main()
{
     float a,b;
     printf("enter any number\n");
     scanf("%f",&a);
     b=square(a);
     printf("squareof %f is %f\n",a,b);

    return 0;
}
float square(float x)
{
    float y;
    y=x*x;
    return (y);
    }