#include <stdio.h> 


int main()
{
    int a[80],n,sum=0,avg;
     printf("Enter the  number of elements of the array");
    scanf("%d",&n);
     printf("Enter the  numbers in the array");
    for(int i=0;i<n;++i)
    {
    printf("%d\t",i+1);
    scanf("%d",&a[i]);
   
    //adding the elements inputted by the user
    sum+=a[i];
    }
    avg=sum/n;
    printf("the average of the entered numbers   %d",avg);
    return 0;
}