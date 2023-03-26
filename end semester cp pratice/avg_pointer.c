#include <stdio.h> 


int main()
{
    int n,sum=0,*ptr;
    float avg=0;
    int a[20];
    printf("Enter the elements");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
ptr=&a[i];
scanf("%d",ptr);
sum+=*ptr;
    }
avg=sum/n;
printf("The average value %d",avg);

    return 0;
}