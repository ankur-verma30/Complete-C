#include <stdio.h> 


int main()
{
    int n,e;
    printf("Enter the limit of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the alements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements to be searched\n");
    scanf("%d",&e);
    for(int j=0;j<n;j++)
{
    if(a[j]==e)
    printf("Element (%d) is found at %d ",e,j+1);
    else
    printf("Element NOT Found");
}
    return 0;
}