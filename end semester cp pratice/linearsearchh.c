#include <stdio.h> 


int main()
{
    int a[]={3,2,5,1,4};
    for (int i = 0; i < 6; i++)
    {
        for(int j=i-1;j>=0&&a[j]>a[i]){
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;


        }
    }
    for(int k=0;)
    return 0;
}