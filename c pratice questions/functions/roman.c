/*Define a function to convert any given year into roman equivalent. Use these roman equivalent for decimal numbers
1==I 5==V 10==X 50==L 100==C 500=D 1000==M.
Roman equivalent of 1988 is mdccclxxxviii. */

#include <stdio.h> 
int romanise(int,int,char);
int main()
{
    int yr;
    printf("\n Enter the year:\n");
    scanf("%d",&yr);
    yr=romanise(yr,1000,'m');
    yr=romanise(yr,500,'d');
    yr=romanise(yr,100,'c');
    yr=romanise(yr,50,'l');
    yr=romanise(yr,10,'x');
    yr=romanise(yr,5,'v');
    romanise(yr,1,'i');
    return 0;
}
int romanise(int y,int k,char ch)
{
    int i,j;
    j=y/k;
    for(i=1;i<=j;i++)
    printf("%c",ch);
    return(y%k);
}