/*read integers(N) and print the first three powers (n^1,n^2,n^3) */
#include<stdio.h>
#include<math.h>

int main()
{
    int a ,pow1,pow2,pow3;
    printf("enter the integer\n");
    scanf("%d",&a);
    pow1=pow(a,1);
    pow2=pow(a,2);
    pow3=pow(a,3);
    printf("the first three powers of the given integerfor\n1st power=%d\n2nd power=%d\n3rd power%d",pow1,pow2,pow3);
    return 0;

}