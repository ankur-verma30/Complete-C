#include <stdio.h> 
float square(float);

int main()
{
    float a,b;
    printf("enter the number");
    scanf("%f",&a);
    b=square(a);
    printf("the square of %f is %f ",a,b);

        return 0;
}
float square(float x)
{
    float y;
    y=x*x;
    return(y);
}