/*two numbers are entered through the keyboard . write a program to find the value of one number raised to another number */
#include <stdio.h> 
#include<math.h>

int main()
{
    float x,y;
    int i;
    float pow1,pow2;
    while(i<10)
    {
        
printf("Enter the value of X and Y :\n");
    scanf("%f %f",&x,&y);
    pow1=pow(x,y);
    printf("the number X raised to power Y= %f\n",pow1);
    pow2=pow(y,x);

        printf("the number Y raised to power X= %f\n",pow2);
        i++;
    }
    return 0;
}