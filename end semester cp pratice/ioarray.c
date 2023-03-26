#include <stdio.h> 


int main()
{
    int a[5];   //inputting
    printf("Enter the five numbers in the array");
    for(int i=0;i<5;++i)
    scanf("%d",&a[i]);
printf("Display the inputted array");//diplaying
for(int i=0;i<5;++i)
{
printf("%d\n",a[i]);

}
    return 0;
}