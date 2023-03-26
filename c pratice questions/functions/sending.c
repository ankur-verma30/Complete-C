/*sending and recieving functions between functions*/
#include <stdio.h> 
int  calsum(int x,int y,int z); /*formal argument*/

int main()
{
    int a,b,c,sum;
    printf("enter any three numbers");
    scanf("%d %d %d",&a,&b,&c);
    sum=calsum(a,b,c);     /*actual argument */
    printf("sum=%d\n",sum);
    return 0;
}
int calsum(int x,int y,int z)
{
int d;
d=x+y+z;
return(d);
}