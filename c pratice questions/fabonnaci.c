
/* fabonacci series */
#include <stdio.h>
int main()
{  

    int n1=0,n2=1,n3,num;
    printf("enter the given number you want to make  fabbanoci series\n");
    scanf("%d",&num);
    for(int i=2;i<=num;++i) 
   {
       n3=n2+n1;
       printf("%d",n3);
       printf(" ");
               n1=n2;
        n2=n3;
    }
  

    return 0;
}